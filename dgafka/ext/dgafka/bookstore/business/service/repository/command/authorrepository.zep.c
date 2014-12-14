
#ifdef HAVE_CONFIG_H
#include "../../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../../php_ext.h"
#include "../../../../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Repository_Command_AuthorRepository) {

	ZEPHIR_REGISTER_INTERFACE(Dgafka\\BookStore\\Business\\Service\\Repository\\Command, AuthorRepository, dgafka, bookstore_business_service_repository_command_authorrepository, dgafka_bookstore_business_service_repository_command_authorrepository_method_entry);

	return SUCCESS;

}

/**
 * @param Entity\Author author
 */
ZEPHIR_DOC_METHOD(Dgafka_BookStore_Business_Service_Repository_Command_AuthorRepository, save);

