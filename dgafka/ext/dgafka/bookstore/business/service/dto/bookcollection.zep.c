
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


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_BookCollection) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto, BookCollection, dgafka, bookstore_business_service_dto_bookcollection, dgafka_bookstore_business_service_dto_bookcollection_method_entry, 0);

	/**
	 * @var <Book>[]
	 */
	zend_declare_property_null(dgafka_bookstore_business_service_dto_bookcollection_ce, SL("books"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_BookCollection, __construct) {

	zval *books_param = NULL;
	zval *books = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &books_param);

	zephir_get_arrval(books, books_param);


	zephir_update_property_this(this_ptr, SL("books"), books TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

