
#ifdef HAVE_CONFIG_H
#include "../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../php_ext.h"
#include "../../../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/exception.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Book) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto, Book, dgafka, bookstore_business_service_dto_book, dgafka_bookstore_business_service_dto_book_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_book_ce, SL("id"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_book_ce, SL("author"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_book_ce, SL("name"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_book_ce, SL("description"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Book, __construct) {

	zval *id_param = NULL, *author, *name_param = NULL, *description_param = NULL;
	zval *id = NULL, *name = NULL, *description = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 4, 0, &id_param, &author, &name_param, &description_param);

	zephir_get_strval(id, id_param);
	if (unlikely(Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(name_param) == IS_STRING)) {
		zephir_get_strval(name, name_param);
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}
	if (unlikely(Z_TYPE_P(description_param) != IS_STRING && Z_TYPE_P(description_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'description' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(description_param) == IS_STRING)) {
		zephir_get_strval(description, description_param);
	} else {
		ZEPHIR_INIT_VAR(description);
		ZVAL_EMPTY_STRING(description);
	}


	if (!(zephir_instance_of_ev(author, dgafka_bookstore_business_service_dto_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'author' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Author'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("id"), id TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("author"), author TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("name"), name TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("description"), description TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

