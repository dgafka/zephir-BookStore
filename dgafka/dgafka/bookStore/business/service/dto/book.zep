namespace Dgafka\BookStore\Business\Service\Dto;


class Book
{

    private id;

    private author;

    private name;

    private description;

    public function __construct(string id, <Author> author, string! name, string! description) {
        let this->id            = id;
        let this->author        = author;
        let this->name          = name;
        let this->description   = description;
    }

}