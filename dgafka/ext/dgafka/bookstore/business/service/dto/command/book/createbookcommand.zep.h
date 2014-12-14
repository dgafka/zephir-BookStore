
extern zend_class_entry *dgafka_bookstore_business_service_dto_command_book_createbookcommand_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Command_Book_CreateBookCommand);

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Command_Book_CreateBookCommand, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_dto_command_book_createbookcommand___construct, 0, 0, 4)
	ZEND_ARG_OBJ_INFO(0, guid, Dgafka\\BookStore\\Business\\Model\\ValueObject\\Guid, 0)
	ZEND_ARG_OBJ_INFO(0, author, Dgafka\\BookStore\\Business\\Model\\Entity\\Author, 0)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_dto_command_book_createbookcommand_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Dto_Command_Book_CreateBookCommand, __construct, arginfo_dgafka_bookstore_business_service_dto_command_book_createbookcommand___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
  PHP_FE_END
};
