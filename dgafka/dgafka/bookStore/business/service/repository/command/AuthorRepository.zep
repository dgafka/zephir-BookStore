namespace Dgafka\BookStore\Business\Service\Repository\Command;

use Dgafka\BookStore\Business\Model\Entity;

interface AuthorRepository
{

    /**
    * @param Entity\Author author
    */
    public function save(<Entity\Author> author) -> void;

}