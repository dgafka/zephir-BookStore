namespace Dgafka\BookStore\Business\Service\Factory;

use Dgafka\BookStore\Business\Model\Entity;

class Author
{

    public function create(string id, string! name, string! surname) -> <Entity\Author> {

        var author;

        let author = new Entity\Author(id, name, surname);

        return author;
    }

}