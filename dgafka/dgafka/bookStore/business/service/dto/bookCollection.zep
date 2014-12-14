namespace Dgafka\BookStore\Business\Service\Dto;


class BookCollection
{

    /**
    * @var <Book>[]
    */
    public books;

    public function __construct(array books) {
        let this->books = books;
    }

}