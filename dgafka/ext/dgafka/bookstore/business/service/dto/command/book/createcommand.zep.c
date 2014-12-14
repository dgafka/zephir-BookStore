
#ifdef HAVE_CONFIG_H
#include "../../../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../../../php_ext.h"
#include "../../../../../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Command_Book_CreateCommand) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book, CreateCommand, dgafka, bookstore_business_service_dto_command_book_createcommand, dgafka_bookstore_business_service_dto_command_book_createcommand_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_createcommand_ce, SL("id"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_createcommand_ce, SL("author"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_createcommand_ce, SL("name"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_createcommand_ce, SL("description"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Command_Book_CreateCommand, __construct) {

	zval *id_param = NULL, *authorId_param = NULL, *name_param = NULL, *description_param = NULL;
	zval *id = NULL, *authorId = NULL, *name = NULL, *description = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 4, 0, &id_param, &authorId_param, &name_param, &description_param);

	zephir_get_strval(id, id_param);
	zephir_get_strval(authorId, authorId_param);
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


	zephir_update_property_this(this_ptr, SL("id"), id TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("author"), authorId TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("name"), name TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("description"), description TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

