
extern zend_class_entry *dgafka_bookstore_business_service_dto_author_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Author);

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Author, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_dto_author___construct, 0, 0, 3)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, surname)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_dto_author_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Dto_Author, __construct, arginfo_dgafka_bookstore_business_service_dto_author___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
  PHP_FE_END
};
