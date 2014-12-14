
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
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Model_ValueObject_Guid) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Model\\ValueObject, Guid, dgafka, bookstore_business_model_valueobject_guid, dgafka_bookstore_business_model_valueobject_guid_method_entry, ZEND_ACC_FINAL_CLASS);

	zend_declare_property_null(dgafka_bookstore_business_model_valueobject_guid_ce, SL("id"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Model_ValueObject_Guid, __construct) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_nts_static zephir_fcall_cache_entry *_1 = NULL, *_3 = NULL, *_5 = NULL;
	zval *_0 = NULL, *_2 = NULL, *_4 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_FUNCTION(&_0, "rand", &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_2, "uniqid", &_3, _0, ZEPHIR_GLOBAL(global_true));
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_4, "md5", &_5, _2);
	zephir_check_call_status();
	zephir_update_property_this(this_ptr, SL("id"), _4 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Model_ValueObject_Guid, create) {

	zephir_nts_static zephir_fcall_cache_entry *_0 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, dgafka_bookstore_business_model_valueobject_guid_ce);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", &_0);
	zephir_check_call_status();
	RETURN_MM();

}

