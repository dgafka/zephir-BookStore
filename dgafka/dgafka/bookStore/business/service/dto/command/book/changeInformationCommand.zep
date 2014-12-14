namespace Dgafka\BookStore\Business\Service\Dto\Command\Book;

class ChangeInformationCommand
{

    public id;
    public name;
    public description;

    public function __construct(string id, string name, string description) {
        let this->id            = id;
        let this->name          = name;
        let this->description   = description;
    }

}