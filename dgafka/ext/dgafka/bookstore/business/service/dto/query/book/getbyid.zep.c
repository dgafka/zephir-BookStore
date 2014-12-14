
#ifdef HAVE_CONFIG_H
#include "../../../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../../../php_ext.h"
#include "../../../../../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Query_Book_GetById) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Book, GetById, dgafka, bookstore_business_service_dto_query_book_getbyid, dgafka_bookstore_business_service_dto_query_book_getbyid_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_query_book_getbyid_ce, SL("id"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Query_Book_GetById, __construct) {

	zval *id_param = NULL;
	zval *id = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &id_param);

	zephir_get_strval(id, id_param);


	zephir_update_property_this(this_ptr, SL("id"), id TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

