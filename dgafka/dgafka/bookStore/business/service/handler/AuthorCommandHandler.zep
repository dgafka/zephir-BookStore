namespace Dgafka\BookStore\Business\Service\Handler;

use Dgafka\BookStore\Business\Service\Dto\Command;
use Dgafka\BookStore\Business\Service\Repository;
use Dgafka\BookStore\Business\Service\Factory;

class AuthorCommandHandler
{

    private repository;
    private factory;

    public function __construct(<Repository\Command\AuthorRepository> repository, <Factory\Author> authorFactory) {
        let this->repository = repository;
        let this->factory    = authorFactory;
    }

    public function handleCreateCommand(<Command\Author\CreateCommand> command) -> void {
        var author;

        let author = this->factory->create(command->id, command->name, command->surname);

        this->repository->save(author);
    }


}