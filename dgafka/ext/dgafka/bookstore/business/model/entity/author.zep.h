
extern zend_class_entry *dgafka_bookstore_business_model_entity_author_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Model_Entity_Author);

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, __construct);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, getId);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, getName);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, getSurname);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, setId);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, setName);
PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, setSurname);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_model_entity_author___construct, 0, 0, 3)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, surname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_model_entity_author_setid, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_model_entity_author_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_model_entity_author_setsurname, 0, 0, 1)
	ZEND_ARG_INFO(0, surname)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_model_entity_author_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Author, __construct, arginfo_dgafka_bookstore_business_model_entity_author___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Author, getId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Author, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Author, getSurname, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Author, setId, arginfo_dgafka_bookstore_business_model_entity_author_setid, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Author, setName, arginfo_dgafka_bookstore_business_model_entity_author_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Business_Model_Entity_Author, setSurname, arginfo_dgafka_bookstore_business_model_entity_author_setsurname, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
