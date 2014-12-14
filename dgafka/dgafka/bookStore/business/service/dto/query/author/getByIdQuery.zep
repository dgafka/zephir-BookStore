namespace Dgafka\BookStore\Business\Service\Dto\Query\Author;


class GetByIdQuery
{

    public id;

    public function __construct(string id) {
        let this->id = id;
    }

}