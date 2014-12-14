namespace Dgafka\BookStore\Application\InMemory\Repository\Query;

use Dgafka\BookStore\Business\Service\Repository\Query\AuthorRepository;
use Dgafka\BookStore\Business\Model\Entity;

class AuthorRepository implements AuthorRepository
{

    public static authors;

    public function __construct() {
        let self::authors = [];
    }

    /**
    * @param string id
    * @return <Entity\Author>
    */
    public function findById(string id) -> <Entity\Author>|null {
        if !(array_key_exists(id, self::authors)) {
            return null;
        }

        return self::authors[id];
    }

    /**
    * @param string orderBy [name]
    * @param string type [DESC, ASC]
    * @return <Entity\AuthorCollection>[]
    */
    public function findBy(string! orderBy, string! type) -> array {
        // @TODO implement in nearest future /

        return self::authors;
    }

}