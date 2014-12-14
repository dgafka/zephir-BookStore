namespace Dgafka\BookStore\Business\Service\Dto\Query\Book;


class GetByIdQuery
{

    public id;

    public function __construct(string id) {
        let this->id = id;
    }

}