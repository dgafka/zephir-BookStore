
#ifdef HAVE_CONFIG_H
#include "../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../php_ext.h"
#include "../../../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_AuthorCollection) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto, AuthorCollection, dgafka, bookstore_business_service_dto_authorcollection, dgafka_bookstore_business_service_dto_authorcollection_method_entry, 0);

	/**
	 * @var <Author>[]
	 */
	zend_declare_property_null(dgafka_bookstore_business_service_dto_authorcollection_ce, SL("authors"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_AuthorCollection, __construct) {

	zval *authors_param = NULL;
	zval *authors = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &authors_param);

	zephir_get_arrval(authors, authors_param);


	zephir_update_property_this(this_ptr, SL("authors"), authors TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

