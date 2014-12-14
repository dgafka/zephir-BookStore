
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
#include "kernel/array.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Application_InMemory_Repository_Command_BookRepository) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Application\\InMemory\\Repository\\Command, BookRepository, dgafka, bookstore_application_inmemory_repository_command_bookrepository, dgafka_bookstore_application_inmemory_repository_command_bookrepository_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce, SL("books"), ZEND_ACC_PRIVATE|ZEND_ACC_STATIC TSRMLS_CC);

	zend_class_implements(dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce TSRMLS_CC, 1, dgafka_bookstore_business_service_repository_command_bookrepository_ce);
	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Command_BookRepository, __construct) {

	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	array_init(_0);
	zephir_update_static_property_ce(dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce, SL("books"), &_0 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

/**
 * @param Entity\Book book
 */
PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Command_BookRepository, save) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *book, *_0 = NULL, *_1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &book);



	if (!(zephir_instance_of_ev(book, dgafka_bookstore_business_model_entity_book_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'book' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\Entity\\Book'", "", 0);
		return;
	}
	ZEPHIR_CALL_METHOD(&_0, book, "getid", NULL);
	zephir_check_call_status();
	zephir_update_static_property_array_multi_ce(dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce, SL("books"), &book TSRMLS_CC, SL("z"), 1, _0);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_static_property_ce(&_1, dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce, SL("books") TSRMLS_CC);
	zephir_update_static_property_ce(dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce, SL("books"), &_1 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

/**
 * @param Entity\Book book
 */
PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Command_BookRepository, remove) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *book, *_0 = NULL, *_1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &book);



	if (!(zephir_instance_of_ev(book, dgafka_bookstore_business_model_entity_book_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'book' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\Entity\\Book'", "", 0);
		return;
	}
	ZEPHIR_CALL_METHOD(&_0, book, "getid", NULL);
	zephir_check_call_status();
	zephir_update_static_property_array_multi_ce(dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce, SL("books"), &ZEPHIR_GLOBAL(global_null) TSRMLS_CC, SL("z"), 1, _0);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_static_property_ce(&_1, dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce, SL("books") TSRMLS_CC);
	zephir_update_static_property_ce(dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce, SL("books"), &_1 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

/**
 * @param string id
 */
PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Command_BookRepository, findById) {

	zval *id_param = NULL, *_0, *_1, *_2;
	zval *id = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &id_param);

	zephir_get_strval(id, id_param);


	_0 = zephir_fetch_static_property_ce(dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce, SL("books") TSRMLS_CC);
	if (!(zephir_array_key_exists(_0, id TSRMLS_CC))) {
		RETURN_MM_NULL();
	}
	_1 = zephir_fetch_static_property_ce(dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce, SL("books") TSRMLS_CC);
	zephir_array_fetch(&_2, _1, id, PH_NOISY | PH_READONLY, "dgafka/bookStore/application/inMemory/repository/command/bookRepository.zep", 43 TSRMLS_CC);
	RETURN_CTOR(_2);

}

