namespace Dgafka\BookStore\Business\Service\Handler;

use Dgafka\BookStore\Business\Service\Dto\Query;
use Dgafka\BookStore\Business\Service\Repository;
use Dgafka\BookStore\Business\Service\Service;
use Dgafka\BookStore\Business\Service\Handler\Exception;
use Dgafka\BookStore\Business\Service\Dto;
use Dgafka\BookStore\Business\Model\Entity;

class AuthorQueryHandler
{

    private repository;
    private converter;

    public function __construct(<Repository\Query\AuthorRepository> repository, <Service\Converter\Author\EntityToDto> converter) {
        let this->repository = repository;
        let this->converter  = converter;
    }

    public function handleGetByQuery(<Query\Author\GetByQuery> query) -> <Dto\AuthorCollection> {
        var authorCollection, author, authorResults;
        let authorResults = [];

        let authorCollection = this->repository->findBy(query->orderBy, query->type);
        if(empty(authorCollection)) {
            throw new Exception\NotFoundException("Results not found.");
        }

        for author in authorCollection {
            let authorResults[] = this->converter->convert(author);
        }

        let authorCollection = new Dto\AuthorCollection(authorResults);

        return authorCollection;
    }

    public function handleGetByIdQuery(<Query\Author\GetByIdQuery> query) -> <Dto\Author> {
        var author;

        let author = this->repository->findById(query->id);
        if(!(author instanceof Entity\Author)) {
            throw new Exception\NotFoundException("Results not found.");
        }

        let author = this->converter->convert(author);

        return author;
    }

}