namespace Dgafka\BookStore\Business\Model\Entity;

/**
* Domain entity
*/
class Author
{

    private id;

    private name;

    private surname;

    public function __construct(string id, string! name, string! surname) {
        let this->id        = id;
        let this->name      = name;
        let this->surname   = surname;
    }

    public function getId() -> string {
        return this->id;
    }

    public function getName() -> string {
        return this->name;
    }

    public function getSurname() -> string {
        return this->surname;
    }

    public function setId(string id) -> void {
        let this->id = id;
    }

    public function setName(string! name) -> void {
        let this->name = name;
    }

    public function setSurname(string! surname) -> void {
        let this->surname = surname;
    }

}