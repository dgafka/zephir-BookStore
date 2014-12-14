
#ifdef HAVE_CONFIG_H
#include "../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../php_ext.h"
#include "../../../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Factory_Factory) {

	ZEPHIR_REGISTER_INTERFACE(Dgafka\\BookStore\\Business\\Service\\Factory, Factory, dgafka, bookstore_business_service_factory_factory, dgafka_bookstore_business_service_factory_factory_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Dgafka_BookStore_Business_Service_Factory_Factory, create);

