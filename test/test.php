<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

//Initialization

$repositories = [
	'commandAuthor' => new \Dgafka\BookStore\Application\InMemory\Repository\Command\AuthorRepository(),
	'commandBook'   => new \Dgafka\BookStore\Application\InMemory\Repository\Command\BookRepository(),
	'queryAuthor'   => new \Dgafka\BookStore\Application\InMemory\Repository\Query\AuthorRepository(),
	'queryBook'     => new \Dgafka\BookStore\Application\InMemory\Repository\Query\BookRepository()
];

$factories = [
	'factoryAuthor' => new \Dgafka\BookStore\Business\Service\Factory\Author(),
	'factoryBook'   => new \Dgafka\BookStore\Business\Service\Factory\Book()
];

$converters = [
	'author'    => new \Dgafka\BookStore\Business\Service\Service\Converter\Author\EntityToDto(),
];
$converters['book'] = new \Dgafka\BookStore\Business\Service\Service\Converter\Book\EntityToDto($converters['author']);


$handlers = [
	'commandAuthor' => new \Dgafka\BookStore\Business\Service\Handler\AuthorCommandHandler($repositories['commandAuthor'], $factories['factoryAuthor']),
	'commandBook'   => new \Dgafka\BookStore\Business\Service\Handler\BookCommandHandler($repositories['commandBook']),
	'queryAuthor'   => new \Dgafka\BookStore\Business\Service\Handler\AuthorQueryHandler($repositories['queryAuthor'], $converters['author']),
	'queryBook'     => new \Dgafka\BookStore\Business\Service\Handler\BookQueryHandler($repositories['queryBook'], $converters['book'])
];

$handlers['commandBook']->setBookFactory($factories['factoryBook']);
$handlers['commandBook']->setAuthorRepository($repositories['queryAuthor']);

$bus = new \Dgafka\BookStore\Business\Service\Service\CommandQueryBus();

//End of Initialization

//
// TESTS
//

//Test config
$testForAmount = 1000;

//----------
//Author

$start = microtime(true);

for($i = 0; $i < $testForAmount; $i++) {
	$guid = guidGenerator();
	$createAuthorCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Author\CreateCommand($guid, 'test-' . $i, 'tester' . $i);
	$bus->execute($handlers['commandAuthor'], $createAuthorCommand);
}

$findByIdAuthorQuery   = new \Dgafka\BookStore\Business\Service\Dto\Query\Author\GetByIdQuery($guid);
$author = $bus->execute($handlers['queryAuthor'], $findByIdAuthorQuery);
if(!($author instanceof Dgafka\BookStore\Business\Service\Dto\Author)) {
	throw new \Exception("Test Failed! Author not found!");
}

$findByAuthorQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Author\GetByQuery("name", "desc");
$results = $bus->execute($handlers['queryAuthor'], $findByAuthorQuery);

if(count($results->authors) != $testForAmount) {
	throw new \Exception("Test Failed! All authors have not been added properly. Expected: " . $testForAmount . ' Got: ' . count($results->authors));
}

//------------
//Book

$booksIds = [];
for($i = 0; $i < $testForAmount; $i++) {
	$guid = guidGenerator();
	$booksIds[] = $guid;
	$createBookCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Book\CreateCommand($guid, $author->id, ('book' . $i), ('book test description: ' . $i));
	$bus->execute($handlers['commandBook'], $createBookCommand);
}

$findByIdBookQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Book\GetByIdQuery($guid);
$book = $bus->execute($handlers['queryBook'], $findByIdBookQuery);
if(!($book instanceof Dgafka\BookStore\Business\Service\Dto\Book)) {
	throw new \Exception("Test Failed! Book not found!");
}

$findByBookQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Book\GetByQuery("name", "desc");
$results = $bus->execute($handlers['queryBook'], $findByBookQuery);
if(count($results->books) != $testForAmount) {
	throw new \Exception("Test Failed! All books have not been added properly. Expected: " . $testForAmount . ' Got: ' . count($results->books));
}

$authorId = guidGenerator();
$createAuthorCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Author\CreateCommand($authorId, 'test-' . $i, 'tester' . $i);
$bus->execute($handlers['commandAuthor'], $createAuthorCommand);
foreach($booksIds as $bookId) {
	$changeAuthorCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Book\ChangeAuthorCommand($bookId, $authorId);
	$bus->execute($handlers['commandBook'], $changeAuthorCommand);

	$changeInformationCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Book\ChangeInformationCommand($bookId, 'tested', 'well');
	$bus->execute($handlers['commandBook'], $changeInformationCommand);

	$findByIdBookQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Book\GetByIdQuery($bookId);
	$book = $bus->execute($handlers['queryBook'], $findByIdBookQuery);
	if(!($book instanceof Dgafka\BookStore\Business\Service\Dto\Book) || $book->author->id != $authorId || $book->name !== 'tested' || $book->description != 'well') {
		throw new \Exception("Test Failed! Book not found!");
	}

	$removeBookCommand = new \Dgafka\Bookstore\Business\Service\Dto\Command\Book\RemoveCommand($bookId);
	$bus->execute($handlers['commandBook'], $removeBookCommand);
}

$deletedTest = false;
try {
	$findByBookQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Book\GetByQuery("name", "desc");
	$results = $bus->execute($handlers['queryBook'], $findByBookQuery);
}catch (Dgafka\BookStore\Business\Service\Handler\Exception\NotFoundException $e) {
	$deletedTest = true;
}

if(!$deletedTest) {
	throw new \Exception("Test Failed! All books have not been deleted properly.");
}

$finish = microtime(true);

echo "\nApplication has ended without errors for test loops: ".$testForAmount." \n";
echo "\nTime to finish took: " . ($finish - $start) ."ms\n\n";

function guidGenerator() {
	return md5(uniqid(rand(), true));
}