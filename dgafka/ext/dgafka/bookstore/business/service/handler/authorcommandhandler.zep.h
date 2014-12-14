
extern zend_class_entry *dgafka_bookstore_business_service_handler_authorcommandhandler_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Handler_AuthorCommandHandler);

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorCommandHandler, __construct);
PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorCommandHandler, handleCreateCommand);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_handler_authorcommandhandler___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, repository, Dgafka\\BookStore\\Business\\Service\\Repository\\Command\\AuthorRepository, 0)
	ZEND_ARG_OBJ_INFO(0, authorFactory, Dgafka\\BookStore\\Business\\Service\\Factory\\Author, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_handler_authorcommandhandler_handlecreatecommand, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, command, Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Author\\CreateCommand, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_handler_authorcommandhandler_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Handler_AuthorCommandHandler, __construct, arginfo_dgafka_bookstore_business_service_handler_authorcommandhandler___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Dgafka_BookStore_Business_Service_Handler_AuthorCommandHandler, handleCreateCommand, arginfo_dgafka_bookstore_business_service_handler_authorcommandhandler_handlecreatecommand, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
