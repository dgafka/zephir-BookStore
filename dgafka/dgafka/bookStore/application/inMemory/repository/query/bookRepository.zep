namespace Dgafka\BookStore\Application\InMemory\Repository\Query;

use Dgafka\BookStore\Business\Service\Repository\Query\BookRepository;
use Dgafka\BookStore\Business\Model\Entity;

class BookRepository implements BookRepository
{

    public static books;

    public function __construct() {
        let self::books = [];
    }

    /**
    * @param string id
    * @return <Entity\Book>
    */
    public function findById(string id) -> <Entity\Book>|null {
        if !(array_key_exists(id, self::books)) {
            return null;
        }

        return self::books[id];
    }

    /**
    * @param string orderBy [name, descrition]
    * @param string type [DESC, ASC]
    * @return <Entity\BookCollection>[]
    */
    public function findBy(string! orderBy, string! type) -> array {
        // @TODO implement in nearest future /

        return self::books;
    }

}