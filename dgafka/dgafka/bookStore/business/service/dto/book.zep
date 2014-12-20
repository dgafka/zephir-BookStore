namespace Dgafka\BookStore\Business\Service\Dto;


class Book
{

    public id;

    public author;

    public name;

    public description;

    public function __construct(string id, <Author> author, string! name, string! description) {
        let this->id            = id;
        let this->author        = author;
        let this->name          = name;
        let this->description   = description;
    }

}