
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


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Service_CommandBus) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Service, CommandBus, dgafka, bookstore_business_service_service_commandbus, dgafka_bookstore_business_service_service_commandbus_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Service_CommandBus, execute) {

	zephir_nts_static zephir_fcall_cache_entry *_0 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *handler, *command, *methodName = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &handler, &command);



	ZEPHIR_CALL_METHOD(&methodName, this_ptr, "getcommandname", &_0, command);
	zephir_check_call_status();
	if (!(zephir_method_exists(handler, methodName TSRMLS_CC)  == SUCCESS)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_service_exception_classnotfoundexception_ce, "Class with such method doesn't exists.", "dgafka/bookStore/business/service/service/CommandBus.zep", 12);
		return;
	}
	ZEPHIR_CALL_METHOD(NULL, handler, Z_STRVAL_P(methodName), NULL, command);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Service_CommandBus, getCommandName) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_nts_static zephir_fcall_cache_entry *_2 = NULL;
	zval *command, *_0, *_1 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &command);



	ZEPHIR_INIT_VAR(_0);
	zephir_get_class(_0, command, 0 TSRMLS_CC);
	ZEPHIR_CALL_FUNCTION(&_1, "ucfirst", &_2, _0);
	zephir_check_call_status();
	ZEPHIR_CONCAT_SV(return_value, "handle", _1);
	RETURN_MM();

}

