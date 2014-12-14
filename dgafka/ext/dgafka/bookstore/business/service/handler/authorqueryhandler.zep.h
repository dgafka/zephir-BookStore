
extern zend_class_entry *dgafka_bookstore_business_service_handler_authorqueryhandler_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler);

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler, __construct);
PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler, handleGetByQuery);
PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler, handleGetByIdQuery);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_handler_authorqueryhandler___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, repository, Dgafka\\BookStore\\Business\\Service\\Repository\\Query\\AuthorRepository, 0)
	ZEND_ARG_OBJ_INFO(0, converter, Dgafka\\BookStore\\Business\\Service\\Service\\Converter\\Author\\EntityToDto, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_handler_authorqueryhandler_handlegetbyquery, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, query, Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Author\\GetByQuery, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_handler_authorqueryhandler_handlegetbyidquery, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, query, Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Author\\GetByIdQuery, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_handler_authorqueryhandler_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler, __construct, arginfo_dgafka_bookstore_business_service_handler_authorqueryhandler___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler, handleGetByQuery, arginfo_dgafka_bookstore_business_service_handler_authorqueryhandler_handlegetbyquery, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler, handleGetByIdQuery, arginfo_dgafka_bookstore_business_service_handler_authorqueryhandler_handlegetbyidquery, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
