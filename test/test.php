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

$bus = new \Dgafka\BookStore\Business\Service\Service\CommandQueryBus();

//End of Initialization

//Add && find Author

for($i = 0; $i <= 100; $i++) {
	$guid = guidGenerator();
	$createAuthorCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Author\CreateCommand($guid, 'test-' . $i, 'tester' . $i);
	$bus->execute($handlers['commandAuthor'], $createAuthorCommand);
}
$findByIdAuthorCommand   = new \Dgafka\BookStore\Business\Service\Dto\Query\Author\GetByIdQuery($guid);
var_dump($bus->execute($handlers['queryAuthor'], $findByIdAuthorCommand));
$findByAuthorCommand     = new \Dgafka\BookStore\Business\Service\Dto\Query\Author\GetByQuery("name", "desc");
var_dump($bus->execute($handlers['queryAuthor'], $findByAuthorCommand));








function guidGenerator() {
	return md5(uniqid(rand(), true));
}