namespace Dgafka\BookStore\Business\Service\Repository\Query;

use Dgafka\BookStore\Business\Model\Entity;

interface AuthorRepository
{

    /**
    * @param string id
    * @return <Entity\Author>
    */
    public function findById(string id) -> <Entity\Author>;

    /**
    * @param string orderBy [name]
    * @param string type [DESC, ASC]
    * @return <Entity\AuthorCollection>[]
    */
    public function findBy(string! orderBy, string! type) -> array;

}