namespace Dgafka\BookStore\Business\Service\Factory;

use Dgafka\BookStore\Business\Model\Entity;

class Book
{

    public function create(string id, <Entity\Author> author, string! name, string! description) -> <Entity\Book> {
        var book;

        let book = new Entity\Book(id, author, name, description);

        return book;
    }

}
