
extern zend_class_entry *dgafka_bookstore_business_service_handler_bookqueryhandler_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler);

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler, __construct);
PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler, handleGetByQuery);
PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler, handleGetByIdQuery);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_handler_bookqueryhandler___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, repository, Dgafka\\BookStore\\Business\\Service\\Repository\\Query\\BookRepository, 0)
	ZEND_ARG_OBJ_INFO(0, converter, Dgafka\\BookStore\\Business\\Service\\Service\\Converter\\Book\\EntityToDto, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_handler_bookqueryhandler_handlegetbyquery, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, query, Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Book\\GetByQuery, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_handler_bookqueryhandler_handlegetbyidquery, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, query, Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Book\\GetByIdQuery, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_handler_bookqueryhandler_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler, __construct, arginfo_dgafka_bookstore_business_service_handler_bookqueryhandler___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler, handleGetByQuery, arginfo_dgafka_bookstore_business_service_handler_bookqueryhandler_handlegetbyquery, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler, handleGetByIdQuery, arginfo_dgafka_bookstore_business_service_handler_bookqueryhandler_handlegetbyidquery, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
