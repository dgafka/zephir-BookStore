namespace Dgafka\BookStore\Business\Service\Dto\Command\Book;

use Dgafka\BookStore\Business\Model\Entity;

class ChangeAuthorCommand
{

    public bookId;
    public authorId;

    public function __construct(string bookId, string authorId) {
        let this->bookId    = bookId;
        let this->authorId  = authorId;
    }

}