
extern zend_class_entry *dgafka_bookstore_business_service_service_commandquerybus_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Service_CommandQueryBus);

PHP_METHOD(Dgafka_BookStore_Business_Service_Service_CommandQueryBus, execute);
PHP_METHOD(Dgafka_BookStore_Business_Service_Service_CommandQueryBus, getMethodName);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_service_commandquerybus_execute, 0, 0, 2)
	ZEND_ARG_INFO(0, handler)
	ZEND_ARG_INFO(0, command)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_service_commandquerybus_getmethodname, 0, 0, 1)
	ZEND_ARG_INFO(0, command)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_service_commandquerybus_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Service_CommandQueryBus, execute, arginfo_dgafka_bookstore_business_service_service_commandquerybus_execute, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Service_Service_CommandQueryBus, getMethodName, arginfo_dgafka_bookstore_business_service_service_commandquerybus_getmethodname, ZEND_ACC_PRIVATE)
  PHP_FE_END
};
