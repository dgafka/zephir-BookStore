
extern zend_class_entry *dgafka_bookstore_business_model_entity_book_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Model_Entity_Book);

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, __construct);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, getId);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, getAuthor);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, getName);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, getDescription);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, setId);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, setAuthor);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, setName);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, setDescription);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_model_entity_book___construct, 0, 0, 4)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_OBJ_INFO(0, author, Dgafka\\BookStore\\Business\\Model\\Entity\\Dgafka\\BookStore\\Business\\Model\\Entity\\Author, 0)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_model_entity_book_setid, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_model_entity_book_setauthor, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, author, Dgafka\\BookStore\\Business\\Model\\Entity\\Dgafka\\BookStore\\Business\\Model\\Entity\\Author, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_model_entity_book_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_model_entity_book_setdescription, 0, 0, 1)
	ZEND_ARG_INFO(0, description)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_model_entity_book_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Book, __construct, arginfo_dgafka_bookstore_business_model_entity_book___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Book, getId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Book, getAuthor, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Book, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Book, getDescription, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Book, setId, arginfo_dgafka_bookstore_business_model_entity_book_setid, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Book, setAuthor, arginfo_dgafka_bookstore_business_model_entity_book_setauthor, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Book, setName, arginfo_dgafka_bookstore_business_model_entity_book_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Book, setDescription, arginfo_dgafka_bookstore_business_model_entity_book_setdescription, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
