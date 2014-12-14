namespace Dgafka\BookStore\Business\Service\Handler;

use Dgafka\BookStore\Business\Service\Dto\Command;
use Dgafka\BookStore\Business\Service\Repository;
use Dgafka\BookStore\Business\Service\Factory;

class BookCommandHandler
{

    private bookRepository;
    private authorRepository;
    private factory;

    public function __construct(<Repository\Command\BookRepository> repository) {
        let this->bookRepository = repository;
    }


    public function handleCreateCommand(<Command\CreateCommand> command) -> void {
        var author, book;

        if(!this->authorRepository || !this->factory) {
            throw new Exception\DependencyInjectionException("Inject all dependencies, via setter first.");
        }

        let author = this->authorRepository->findById(command->author);
        if(!author) {
            throw new Exception\NotFoundException("Author doesn't exist");
        }

        let book = this->factory->create(command->id, author, command->name, command->description);
        this->bookRepository->save(book);
    }

    public function handleChangeAuthorCommand(<Command\ChangeAuthorCommand> command) -> void {
        var book, author;

        if(!this->authorRepository) {
            throw new Exception\DependencyInjectionException("Inject all dependencies, via setter first.");
        }

        let author = this->authorRepository->findById(command->author);
        if(!author) {
            throw new Exception\NotFoundException("Author doesn't exist");
        }

        let book = this->bookRepository->findById(command->id);
        if(!(book instanceof Command\RemoveCommand)) {
            throw new Exception\NotFoundException("Book doesn't exist.");
        }

        book->setAuthor(author);
        this->bookRepository->save(book);
    }

    public function handleRemoveCommand(<Command\RemoveCommand> command) -> void {
        var book;

        let book = this->bookRepository->findById(command->id);

        if(!(book instanceof Command\RemoveCommand)) {
            throw new Exception\NotFoundException("Book doesn't exist.");
        }

        this->bookRepository->remove(book);
    }

    public function handleChangeInformationCommand(<Command\ChangeInformationCommand> command) -> void {
        var book;

        let book = this->bookRepository->findById(command->id);

        if(!(book instanceof Command\RemoveCommand)) {
            throw new Exception\NotFoundException("Book doesn't exist.");
        }


        book->setName(command->name);
        book->setDescription(command->description);

        this->bookRepository->save(book);
    }


    public function setBookFactory(<Factory\Book> bookFactory) {
        let this->factory    = bookFactory;
    }

    public function setAuthorRepository(<Repository\Query\AuthorRepository> repository) {
        let this->authorRepository = repository;
    }

}