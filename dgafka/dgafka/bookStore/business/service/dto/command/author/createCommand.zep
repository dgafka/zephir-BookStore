namespace Dgafka\BookStore\Business\Service\Dto\Command\Author;

class CreateCommand
{

    public id;
    public name;
    public surname;

    public function __construct(string id, string! name, string! surname) {
        let this->id      = id;
        let this->name      = name;
        let this->surname   = surname;
    }

}