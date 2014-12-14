namespace Dgafka\BookStore\Business\Service\Handler;

use Dgafka\BookStore\Business\Service\Dto\Query;
use Dgafka\BookStore\Business\Service\Dto;
use Dgafka\BookStore\Business\Service\Repository;
use Dgafka\BookStore\Business\Service\Service;
use Dgafka\BookStore\Business\Service\Handler\Exception;
use Dgafka\BookStore\Business\Model\Entity;

class BookQueryHandler
{

    private repository;
    private converter;

    public function __construct(<Repository\Query\BookRepository> repository, <Service\Converter\Book\EntityToDto> converter) {
        let this->repository = repository;
        let this->converter  = converter;
    }

    public function handleGetByQuery(<Query\Book\GetByQuery> query) -> <Dto\BookCollection> {
        var bookCollection, book, bookResults;
        let bookResults = [];

        let bookCollection = this->repository->findBy(query->orderBy, query->type);
        if(empty(bookCollection)) {
            throw new Exception\NotFoundException("Results not found.");
        }

        for book in bookCollection {
            let bookResults[] = this->converter->convert(book);
        }

        let bookCollection = new Dto\BookCollection(bookResults);


        return bookCollection;
    }

    public function handleGetByIdQuery(<Query\Book\GetByIdQuery> query) -> <Dto\Book> {
        var book;

        let book = this->repository->findById(query->id);
        if(!(book instanceof Entity\Book)) {
            throw new Exception\NotFoundException("Results not found.");
        }

        let book = this->converter->convert(book);

        return book;
    }

}