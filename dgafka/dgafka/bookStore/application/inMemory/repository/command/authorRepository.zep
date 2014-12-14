namespace Dgafka\BookStore\Application\InMemory\Repository\Command;

use Dgafka\BookStore\Business\Service\Repository\Command;
use Dgafka\BookStore\Application\InMemory\Repository\Query;
use Dgafka\BookStore\Business\Model\Entity;

class AuthorRepository implements Command\AuthorRepository
{

    private static authors;

    public function __construct() {
        let self::authors = [];
    }

    /**
    * @param Entity\Author author
    */
    public function save(<Entity\Author> author) -> void {

        let self::authors[author->getId()] = author;

        let Query\AuthorRepository::authors = self::authors;
    }

}