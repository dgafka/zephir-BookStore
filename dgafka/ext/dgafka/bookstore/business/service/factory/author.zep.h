
extern zend_class_entry *dgafka_bookstore_business_service_factory_author_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Factory_Author);

PHP_METHOD(Dgafka_BookStore_Business_Service_Factory_Author, create);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_factory_author_create, 0, 0, 3)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, surname)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_factory_author_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Factory_Author, create, arginfo_dgafka_bookstore_business_service_factory_author_create, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
