
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
#include "kernel/fcall.h"
#include "kernel/object.h"
#include "kernel/exception.h"
#include "kernel/memory.h"
#include "kernel/concat.h"
#include "kernel/string.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Service_CommandQueryBus) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Service, CommandQueryBus, dgafka, bookstore_business_service_service_commandquerybus, dgafka_bookstore_business_service_service_commandquerybus_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Service_CommandQueryBus, execute) {

	zephir_nts_static zephir_fcall_cache_entry *_0 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *handler, *command, *methodName = NULL, *_1, *_2;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &handler, &command);



	ZEPHIR_CALL_METHOD(&methodName, this_ptr, "getmethodname", &_0, command);
	zephir_check_call_status();
	if (!(zephir_method_exists(handler, methodName TSRMLS_CC)  == SUCCESS)) {
		ZEPHIR_INIT_VAR(_1);
		object_init_ex(_1, dgafka_bookstore_business_service_service_exception_classnotfoundexception_ce);
		ZEPHIR_INIT_VAR(_2);
		ZEPHIR_CONCAT_SV(_2, "Class with such method doesn't exists: ", methodName);
		ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL, _2);
		zephir_check_call_status();
		zephir_throw_exception_debug(_1, "dgafka/bookStore/business/service/service/CommandQueryBus.zep", 12 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_RETURN_CALL_METHOD(handler, Z_STRVAL_P(methodName), NULL, command);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Service_CommandQueryBus, getMethodName) {

	zval *_7 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	zephir_nts_static zephir_fcall_cache_entry *_4 = NULL, *_6 = NULL;
	zval *_2 = NULL;
	zval *command, *className = NULL, *_0, *_1, *_3 = NULL, *_5 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &command);



	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_INIT_VAR(_1);
	zephir_get_class(_1, command, 0 TSRMLS_CC);
	zephir_fast_explode_str(_0, SL("\\"), _1, LONG_MAX TSRMLS_CC);
	zephir_get_arrval(_2, _0);
	ZEPHIR_CPY_WRT(className, _2);
	Z_SET_ISREF_P(className);
	ZEPHIR_CALL_FUNCTION(&_3, "end", &_4, className);
	Z_UNSET_ISREF_P(className);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_5, "ucfirst", &_6, _3);
	zephir_check_call_status();
	zephir_get_strval(_7, _5);
	ZEPHIR_CONCAT_SV(return_value, "handle", _7);
	RETURN_MM();

}

