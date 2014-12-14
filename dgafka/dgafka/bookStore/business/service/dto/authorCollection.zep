namespace Dgafka\BookStore\Business\Service\Dto;


class AuthorCollection
{

   /**
    * @var <Author>[]
    */
    public authors;

    public function __construct(array authors) {
        let this->authors = authors;
    }

}