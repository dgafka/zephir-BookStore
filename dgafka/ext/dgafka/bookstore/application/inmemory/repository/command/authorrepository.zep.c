
#ifdef HAVE_CONFIG_H
#include "../../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../../php_ext.h"
#include "../../../../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/exception.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Application_InMemory_Repository_Command_AuthorRepository) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Application\\InMemory\\Repository\\Command, AuthorRepository, dgafka, bookstore_application_inmemory_repository_command_authorrepository, dgafka_bookstore_application_inmemory_repository_command_authorrepository_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_application_inmemory_repository_command_authorrepository_ce, SL("authors"), ZEND_ACC_PRIVATE|ZEND_ACC_STATIC TSRMLS_CC);

	zend_class_implements(dgafka_bookstore_application_inmemory_repository_command_authorrepository_ce TSRMLS_CC, 1, dgafka_bookstore_business_service_repository_command_authorrepository_ce);
	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Command_AuthorRepository, __construct) {

	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	array_init(_0);
	zephir_update_static_property_ce(dgafka_bookstore_application_inmemory_repository_command_authorrepository_ce, SL("authors"), &_0 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

/**
 * @param Entity\Author author
 */
PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Command_AuthorRepository, save) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *author, *_0 = NULL, *_1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &author);



	if (!(zephir_instance_of_ev(author, dgafka_bookstore_business_model_entity_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'author' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\Entity\\Author'", "", 0);
		return;
	}
	ZEPHIR_CALL_METHOD(&_0, author, "getid", NULL);
	zephir_check_call_status();
	zephir_update_static_property_array_multi_ce(dgafka_bookstore_application_inmemory_repository_command_authorrepository_ce, SL("authors"), &author TSRMLS_CC, SL("z"), 1, _0);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_static_property_ce(&_1, dgafka_bookstore_application_inmemory_repository_command_authorrepository_ce, SL("authors") TSRMLS_CC);
	zephir_update_static_property_ce(dgafka_bookstore_application_inmemory_repository_query_authorrepository_ce, SL("authors"), &_1 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

