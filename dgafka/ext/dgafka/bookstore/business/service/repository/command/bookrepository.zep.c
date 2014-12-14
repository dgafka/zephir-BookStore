
#ifdef HAVE_CONFIG_H
#include "../../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../../php_ext.h"
#include "../../../../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Repository_Command_BookRepository) {

	ZEPHIR_REGISTER_INTERFACE(Dgafka\\BookStore\\Business\\Service\\Repository\\Command, BookRepository, dgafka, bookstore_business_service_repository_command_bookrepository, dgafka_bookstore_business_service_repository_command_bookrepository_method_entry);

	return SUCCESS;

}

/**
 * @param Entity\Book book
 */
ZEPHIR_DOC_METHOD(Dgafka_BookStore_Business_Service_Repository_Command_BookRepository, save);

/**
 * @param Entity\Book book
 */
ZEPHIR_DOC_METHOD(Dgafka_BookStore_Business_Service_Repository_Command_BookRepository, remove);

/**
 * @param string id
 */
ZEPHIR_DOC_METHOD(Dgafka_BookStore_Business_Service_Repository_Command_BookRepository, findById);

