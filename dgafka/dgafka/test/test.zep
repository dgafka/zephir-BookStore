namespace Dgafka\Test;


class Test
{

    private repositories = [];
    private factories = [];
    private converters = [];
    private handlers = [];
    private bus;

    public function __construct() -> void {
        this->initialize();
    }

    public function run() -> void {
        int testForAmount = 100;
        int i = 0;
        float start, finish;
        var guid, createAuthorCommand, changeAuthorCommand, createBookCommand, findByIdAuthorQuery, author, book, findByAuthorQuery, results;
        var booksIds, findByIdBookQuery, findByBookQuery, authorId, changeInformationCommand, bookId, removeBookCommand;
        bool deletedTest;

        //----------
        //Author

        let start = (float)(microtime(true));

        for i in range (1, testForAmount) {
        	let guid = (string)this->guidGenerator();
        	let createAuthorCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Author\CreateCommand(guid, "test-" . i, "tester" . i);
        	this->bus->execute(this->handlers["commandAuthor"], createAuthorCommand);
        }

        let findByIdAuthorQuery   = new \Dgafka\BookStore\Business\Service\Dto\Query\Author\GetByIdQuery(guid);
        let author                = this->bus->execute(this->handlers["queryAuthor"], findByIdAuthorQuery);
        if(!(author instanceof \Dgafka\BookStore\Business\Service\Dto\Author)) {
        	throw new \Exception("Test Failed! Author not found!");
        }

        let findByAuthorQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Author\GetByQuery("name", "desc");
        let results = this->bus->execute(this->handlers["queryAuthor"], findByAuthorQuery);

        if((int)count(results->authors) != testForAmount) {
            echo count(results->authors);
        	throw new \Exception("Test Failed! All authors have not been added properly. Expected: " . testForAmount);
        }

        //------------
        //Book

        let booksIds = [];
        for i in range (1, testForAmount) {
        	let guid = (string)this->guidGenerator();
            let booksIds[] = guid;
        	let createBookCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Book\CreateCommand(guid, author->id, ("book" . i), "book test description: " . $i);
        	this->bus->execute(this->handlers["commandBook"], createBookCommand);
        }

        let findByIdBookQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Book\GetByIdQuery(guid);
        let book = this->bus->execute(this->handlers["queryBook"], findByIdBookQuery);
        if(!(book instanceof \Dgafka\BookStore\Business\Service\Dto\Book)) {
        	throw new \Exception("Test Failed! Book not found!");
        }

        let findByBookQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Book\GetByQuery("name", "desc");
        let results = this->bus->execute(this->handlers["queryBook"], findByBookQuery);
        if(count(results->books) != testForAmount) {
        	throw new \Exception("Test Failed! All books have not been added properly. Expected: " . testForAmount);
        }

        let authorId = (string)this->guidGenerator();
        let createAuthorCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Author\CreateCommand(authorId, "test-" . i, "tester" . i);
        this->bus->execute(this->handlers["commandAuthor"], createAuthorCommand);

        for bookId in booksIds {
        	let changeAuthorCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Book\ChangeAuthorCommand(bookId, authorId);
        	this->bus->execute(this->handlers["commandBook"], changeAuthorCommand);

        	let changeInformationCommand = new \Dgafka\BookStore\Business\Service\Dto\Command\Book\ChangeInformationCommand(bookId, "tested", "well");
        	this->bus->execute(this->handlers["commandBook"], changeInformationCommand);

        	let findByIdBookQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Book\GetByIdQuery(bookId);
        	let book = this->bus->execute(this->handlers["queryBook"], findByIdBookQuery);
        	if(!(book instanceof \Dgafka\BookStore\Business\Service\Dto\Book) || book->author->id != authorId || book->name !== "tested" || book->description != "well") {
        		throw new \Exception("Test Failed! Book not found!");
        	}

        	let removeBookCommand = new \Dgafka\Bookstore\Business\Service\Dto\Command\Book\RemoveCommand(bookId);
        	this->bus->execute(this->handlers["commandBook"], removeBookCommand);
        }

        let deletedTest = false;
        try {
        	let findByBookQuery = new \Dgafka\BookStore\Business\Service\Dto\Query\Book\GetByQuery("name", "desc");
        	let results         = this->bus->execute(this->handlers["queryBook"], findByBookQuery);
        }catch \Dgafka\BookStore\Business\Service\Handler\Exception\NotFoundException {
        	let deletedTest = true;
        }

        if(!deletedTest) {
        	throw new \Exception("Test Failed! All books have not been deleted properly.");
        }

        let finish = (float)microtime(true);

        echo "\nApplication has ended without errors for test loops: ".testForAmount." \n";
        let finish = (finish - start);
        echo "\nTime to finish took: ms\n\n";
        echo finish;
    }

    private function guidGenerator() -> string {
        return (string)md5(uniqid(rand(), true));
    }

    private function initialize() -> void {


        let this->repositories = [
        	"commandAuthor" : new \Dgafka\BookStore\Application\InMemory\Repository\Command\AuthorRepository(),
        	"commandBook"  : new \Dgafka\BookStore\Application\InMemory\Repository\Command\BookRepository(),
        	"queryAuthor"  : new \Dgafka\BookStore\Application\InMemory\Repository\Query\AuthorRepository(),
        	"queryBook"    : new \Dgafka\BookStore\Application\InMemory\Repository\Query\BookRepository()
        ];

        let this->factories = [
        	"factoryAuthor": new \Dgafka\BookStore\Business\Service\Factory\Author(),
        	"factoryBook"  : new \Dgafka\BookStore\Business\Service\Factory\Book()
        ];

        let this->converters = [
        	"author"   : new \Dgafka\BookStore\Business\Service\Service\Converter\Author\EntityToDto()
        ];
        let this->converters["book"] = new \Dgafka\BookStore\Business\Service\Service\Converter\Book\EntityToDto(this->converters["author"]);


        let this->handlers = [
        	"commandAuthor": new \Dgafka\BookStore\Business\Service\Handler\AuthorCommandHandler(this->repositories["commandAuthor"], this->factories["factoryAuthor"]),
        	"commandBook"  : new \Dgafka\BookStore\Business\Service\Handler\BookCommandHandler(this->repositories["commandBook"]),
        	"queryAuthor"  : new \Dgafka\BookStore\Business\Service\Handler\AuthorQueryHandler(this->repositories["queryAuthor"], this->converters["author"]),
        	"queryBook"    : new \Dgafka\BookStore\Business\Service\Handler\BookQueryHandler(this->repositories["queryBook"], this->converters["book"])
        ];

        this->handlers["commandBook"]->setBookFactory(this->factories["factoryBook"]);
        this->handlers["commandBook"]->setAuthorRepository(this->repositories["queryAuthor"]);

        let this->bus = new \Dgafka\BookStore\Business\Service\Service\CommandQueryBus();
    }


}