namespace Dgafka\BookStore\Business\Service\Repository\Query;

use Dgafka\BookStore\Business\Model\Entity;

interface BookRepository
{

    /**
    * @param string id
    * @return <Entity\Book>
    */
    public function findById(string id) -> <Entity\Book>;

    /**
    * @param string orderBy [name, descrition]
    * @param string type [DESC, ASC]
    * @return <Entity\BookCollection>[]
    */
    public function findBy(string! orderBy, string! type) -> array;

}