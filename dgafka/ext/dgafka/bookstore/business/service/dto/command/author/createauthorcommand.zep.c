
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
#include "kernel/exception.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Command_Author_CreateAuthorCommand) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Author, CreateAuthorCommand, dgafka, bookstore_business_service_dto_command_author_createauthorcommand, dgafka_bookstore_business_service_dto_command_author_createauthorcommand_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_author_createauthorcommand_ce, SL("id"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_author_createauthorcommand_ce, SL("name"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_author_createauthorcommand_ce, SL("surname"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Command_Author_CreateAuthorCommand, __construct) {

	zval *name = NULL, *surname = NULL;
	zval *guid, *name_param = NULL, *surname_param = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &guid, &name_param, &surname_param);

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
	if (unlikely(Z_TYPE_P(surname_param) != IS_STRING && Z_TYPE_P(surname_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'surname' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(surname_param) == IS_STRING)) {
		zephir_get_strval(surname, surname_param);
	} else {
		ZEPHIR_INIT_VAR(surname);
		ZVAL_EMPTY_STRING(surname);
	}


	if (!(zephir_instance_of_ev(guid, dgafka_bookstore_business_model_valueobject_guid_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'guid' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\ValueObject\\Guid'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("id"), guid TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("name"), name TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("surname"), surname TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

