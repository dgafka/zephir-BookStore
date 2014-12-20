namespace Dgafka\BookStore\Application\InMemory\Repository\Command;

use Dgafka\BookStore\Business\Service\Repository\Command;
use Dgafka\BookStore\Application\InMemory\Repository\Query;
use Dgafka\BookStore\Business\Model\Entity;

class BookRepository implements Command\BookRepository
{

    private static books;

    public function __construct() {
        let self::books = [];
    }


    /**
    * @param Entity\Book book
    */
    public function save(<Entity\Book> book) -> void {
        let self::books[book->getId()] = book;

        let Query\BookRepository::books = self::books;
    }

    /**
    * @param Entity\Book book
    */
    public function remove(<Entity\Book> book) -> void {
        let self::books[book->getId()] = null;
        unset(self::books[book->getId()]);

        let Query\BookRepository::books = self::books;
    }

    /**
    * @param string id
    */
    public function findById(string id) -> <Dto\Book>|null {
        if !(array_key_exists(id, self::books)) {
            return null;
        }

        return self::books[id];
    }

}