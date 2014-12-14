
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
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Query_Author_GetByQuery) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Author, GetByQuery, dgafka, bookstore_business_service_dto_query_author_getbyquery, dgafka_bookstore_business_service_dto_query_author_getbyquery_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_query_author_getbyquery_ce, SL("orderBy"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_query_author_getbyquery_ce, SL("type"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

/**
 * @param string orderBy [name]
 * @param string type [DESC, ASC]
 */
PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Query_Author_GetByQuery, __construct) {

	zval *orderBy_param = NULL, *type_param = NULL;
	zval *orderBy = NULL, *type = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &orderBy_param, &type_param);

	if (unlikely(Z_TYPE_P(orderBy_param) != IS_STRING && Z_TYPE_P(orderBy_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'orderBy' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(orderBy_param) == IS_STRING)) {
		zephir_get_strval(orderBy, orderBy_param);
	} else {
		ZEPHIR_INIT_VAR(orderBy);
		ZVAL_EMPTY_STRING(orderBy);
	}
	if (unlikely(Z_TYPE_P(type_param) != IS_STRING && Z_TYPE_P(type_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'type' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(type_param) == IS_STRING)) {
		zephir_get_strval(type, type_param);
	} else {
		ZEPHIR_INIT_VAR(type);
		ZVAL_EMPTY_STRING(type);
	}


	zephir_update_property_this(this_ptr, SL("orderBy"), orderBy TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("type"), type TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

