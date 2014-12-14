namespace Dgafka\BookStore\Business\Service\Service\Converter\Author;

use Dgafka\BookStore\Business\Service\Dto;
use Dgafka\BookStore\Business\Model\Entity;

class EntityToDto
{

    public function convert(<Entity\Author> author) -> <Dto\Author> {
        var authorDto;

        let authorDto = new Dto\Author(author->getId(), author->getName(), author->getSurname());

        return authorDto;
    }

}