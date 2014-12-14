namespace Dgafka\BookStore\Business\Service\Dto\Query\Book;


class GetByQuery
{

    public orderBy;
    public type;

    /**
    * @param string orderBy [name, descrition]
    * @param string type [DESC, ASC]
    */
    public function __construct(string! orderBy, string! type) {
        let this->orderBy = orderBy;
        let this->type    = type;
    }

}