
extern zend_class_entry *dgafka_bookstore_business_service_factory_book_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Factory_Book);

PHP_METHOD(Dgafka_BookStore_Business_Service_Factory_Book, create);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_factory_book_create, 0, 0, 4)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_OBJ_INFO(0, author, Dgafka\\BookStore\\Business\\Model\\Entity\\Author, 0)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_factory_book_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Factory_Book, create, arginfo_dgafka_bookstore_business_service_factory_book_create, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
