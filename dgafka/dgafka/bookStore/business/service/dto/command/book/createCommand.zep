namespace Dgafka\BookStore\Business\Service\Dto\Command\Book;

use Dgafka\BookStore\Business\Model\Entity;

class CreateCommand
{

    public id;
    public author;
    public name;
    public description;

    public function __construct(string id, string authorId, string! name, string! description) {
        let this->id            = id;
        let this->author        = authorId;
        let this->name          = name;
        let this->description   = description;
    }

}