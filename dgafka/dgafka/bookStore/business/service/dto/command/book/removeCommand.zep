namespace Dgafka\BookStore\Business\Service\Dto\Command\Book;


class RemoveCommand
{

    public id;

    public function __construct(string id) {
        let this->id = id;
    }

}