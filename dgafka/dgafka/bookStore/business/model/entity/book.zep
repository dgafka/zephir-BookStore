namespace Dgafka\BookStore\Business\Model\Entity;

/**
* Domain entity
*/
class Book
{

    private id;

    private author;

    private name;

    private description;

    public function __construct(string id, <Author> author, string! name, string! description) {
        let this->id     = id;
        let this->author = author;
        let this->name   = name;
        let this->description = description;
    }

    public function getId() -> string {
        return this->id;
    }

    public function getAuthor() -> <Author> {
        return this->author;
    }

    public function getName() -> string {
        return this->name;
    }

    public function getDescription() -> string {
        return this->description;
    }

    public function setId(string id) -> void {
        let this->id = id;
    }

    public function setAuthor(<Author> author) -> void {
        let this->author = author;
    }

    public function setName(string! name) -> void {
        let this->name = name;
    }

    public function setDescription(string! description) -> void {
        let this->description = description;
    }

}