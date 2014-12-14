
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
#include "kernel/array.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Application_InMemory_Repository_Query_BookRepository) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Application\\InMemory\\Repository\\Query, BookRepository, dgafka, bookstore_application_inmemory_repository_query_bookrepository, dgafka_bookstore_application_inmemory_repository_query_bookrepository_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce, SL("books"), ZEND_ACC_PUBLIC|ZEND_ACC_STATIC TSRMLS_CC);

	zend_class_implements(dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce TSRMLS_CC, 1, dgafka_bookstore_business_service_repository_query_bookrepository_ce);
	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Query_BookRepository, __construct) {

	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	array_init(_0);
	zephir_update_static_property_ce(dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce, SL("books"), &_0 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

/**
 * @param string id
 * @return <Entity\Book>
 */
PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Query_BookRepository, findById) {

	zval *id_param = NULL, *_0, *_1, *_2;
	zval *id = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &id_param);

	zephir_get_strval(id, id_param);


	_0 = zephir_fetch_static_property_ce(dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce, SL("books") TSRMLS_CC);
	if (!(zephir_array_key_exists(_0, id TSRMLS_CC))) {
		RETURN_MM_NULL();
	}
	_1 = zephir_fetch_static_property_ce(dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce, SL("books") TSRMLS_CC);
	zephir_array_fetch(&_2, _1, id, PH_NOISY | PH_READONLY, "dgafka/bookStore/application/inMemory/repository/query/bookRepository.zep", 24 TSRMLS_CC);
	RETURN_CTOR(_2);

}

/**
 * @param string orderBy [name, descrition]
 * @param string type [DESC, ASC]
 * @return <Entity\BookCollection>[]
 */
PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Query_BookRepository, findBy) {

	zval *orderBy_param = NULL, *type_param = NULL, *_0;
	zval *orderBy = NULL, *type = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &orderBy_param, &type_param);

	if (unlikely(Z_TYPE_P(orderBy_param) != IS_STRING && Z_TYPE_P(orderBy_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'orderBy' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(orderBy_param) == IS_STRING)) {
		zephir_get_strval(orderBy, orderBy_param);
	} else {
		ZEPHIR_INIT_VAR(orderBy);
		ZVAL_EMPTY_STRING(orderBy);
	}
	if (unlikely(Z_TYPE_P(type_param) != IS_STRING && Z_TYPE_P(type_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'type' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(type_param) == IS_STRING)) {
		zephir_get_strval(type, type_param);
	} else {
		ZEPHIR_INIT_VAR(type);
		ZVAL_EMPTY_STRING(type);
	}


	_0 = zephir_fetch_static_property_ce(dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce, SL("books") TSRMLS_CC);
	RETURN_CTOR(_0);

}

