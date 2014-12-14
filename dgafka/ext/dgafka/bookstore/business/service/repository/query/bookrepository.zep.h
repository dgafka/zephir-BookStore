
extern zend_class_entry *dgafka_bookstore_business_service_repository_query_bookrepository_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Repository_Query_BookRepository);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_repository_query_bookrepository_findbyid, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_repository_query_bookrepository_findby, 0, 0, 2)
	ZEND_ARG_INFO(0, orderBy)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_repository_query_bookrepository_method_entry) {
	PHP_ABSTRACT_ME(Dgafka_BookStore_Business_Service_Repository_Query_BookRepository, findById, arginfo_dgafka_bookstore_business_service_repository_query_bookrepository_findbyid)
	PHP_ABSTRACT_ME(Dgafka_BookStore_Business_Service_Repository_Query_BookRepository, findBy, arginfo_dgafka_bookstore_business_service_repository_query_bookrepository_findby)
  PHP_FE_END
};