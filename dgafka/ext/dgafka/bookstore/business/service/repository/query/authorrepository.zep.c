
#ifdef HAVE_CONFIG_H
#include "../../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../../php_ext.h"
#include "../../../../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Repository_Query_AuthorRepository) {

	ZEPHIR_REGISTER_INTERFACE(Dgafka\\BookStore\\Business\\Service\\Repository\\Query, AuthorRepository, dgafka, bookstore_business_service_repository_query_authorrepository, dgafka_bookstore_business_service_repository_query_authorrepository_method_entry);

	return SUCCESS;

}

/**
 * @param string id
 * @return <Entity\Author>
 */
ZEPHIR_DOC_METHOD(Dgafka_BookStore_Business_Service_Repository_Query_AuthorRepository, findById);

/**
 * @param string orderBy [name]
 * @param string type [DESC, ASC]
 * @return <Entity\AuthorCollection>[]
 */
ZEPHIR_DOC_METHOD(Dgafka_BookStore_Business_Service_Repository_Query_AuthorRepository, findBy);

