namespace Dgafka\BookStore\Business\Service\Repository\Command;

use Dgafka\BookStore\Business\Model\Entity;

interface BookRepository
{

    /**
    * @param Entity\Book book
    */
    public function save(<Entity\Book> book) -> void;

    /**
    * @param Entity\Book book
    */
    public function remove(<Entity\Book> book) -> void;

    /**
    * @param string id
    */
    public function findById(string id) -> <Dto\Book>|null;

}