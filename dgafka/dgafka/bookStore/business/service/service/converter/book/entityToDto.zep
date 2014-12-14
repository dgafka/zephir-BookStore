namespace Dgafka\BookStore\Business\Service\Service\Converter\Book;

use Dgafka\BookStore\Business\Service\Dto;
use Dgafka\BookStore\Business\Model\Entity;
use Dgafka\BookStore\Business\Service\Service\Converter;

class EntityToDto
{

    private authorConverter;

    public function __construct(<Converter\Author\EntityToDto> authorConverter) {
        let this->authorConverter = authorConverter;
    }

    public function convert(<Entity\Book> book) -> <Dto\Book> {
        var bookDto, authorDto;

        let authorDto = this->authorConverter->convert(book->getAuthor());
        let bookDto = new Dto\Book(book->getId(), authorDto, book->getName(), book->getDescription());

        return bookDto;
    }

}