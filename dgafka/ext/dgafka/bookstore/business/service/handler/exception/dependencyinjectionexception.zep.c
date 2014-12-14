
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


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Handler_Exception_DependencyInjectionException) {

	ZEPHIR_REGISTER_CLASS_EX(Dgafka\\BookStore\\Business\\Service\\Handler\\Exception, DependencyInjectionException, dgafka, bookstore_business_service_handler_exception_dependencyinjectionexception, zend_exception_get_default(TSRMLS_C), NULL, 0);

	return SUCCESS;

}

