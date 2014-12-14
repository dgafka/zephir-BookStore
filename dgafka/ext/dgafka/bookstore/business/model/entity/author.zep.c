
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
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/memory.h"


/**
* Domain entity
*/
ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Model_Entity_Author) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Model\\Entity, Author, dgafka, bookstore_business_model_entity_author, dgafka_bookstore_business_model_entity_author_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_model_entity_author_ce, SL("id"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_model_entity_author_ce, SL("name"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_model_entity_author_ce, SL("surname"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, __construct) {

	zval *id_param = NULL, *name_param = NULL, *surname_param = NULL;
	zval *id = NULL, *name = NULL, *surname = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &id_param, &name_param, &surname_param);

	zephir_get_strval(id, id_param);
	if (unlikely(Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(name_param) == IS_STRING)) {
		zephir_get_strval(name, name_param);
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}
	if (unlikely(Z_TYPE_P(surname_param) != IS_STRING && Z_TYPE_P(surname_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'surname' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(surname_param) == IS_STRING)) {
		zephir_get_strval(surname, surname_param);
	} else {
		ZEPHIR_INIT_VAR(surname);
		ZVAL_EMPTY_STRING(surname);
	}


	zephir_update_property_this(this_ptr, SL("id"), id TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("name"), name TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("surname"), surname TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, getId) {


	RETURN_MEMBER(this_ptr, "id");

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, getName) {


	RETURN_MEMBER(this_ptr, "name");

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, getSurname) {


	RETURN_MEMBER(this_ptr, "surname");

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, setId) {

	zval *id_param = NULL;
	zval *id = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &id_param);

	zephir_get_strval(id, id_param);


	zephir_update_property_this(this_ptr, SL("id"), id TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, setName) {

	zval *name_param = NULL;
	zval *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

	if (unlikely(Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(name_param) == IS_STRING)) {
		zephir_get_strval(name, name_param);
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}


	zephir_update_property_this(this_ptr, SL("name"), name TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Author, setSurname) {

	zval *surname_param = NULL;
	zval *surname = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &surname_param);

	if (unlikely(Z_TYPE_P(surname_param) != IS_STRING && Z_TYPE_P(surname_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'surname' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(surname_param) == IS_STRING)) {
		zephir_get_strval(surname, surname_param);
	} else {
		ZEPHIR_INIT_VAR(surname);
		ZVAL_EMPTY_STRING(surname);
	}


	zephir_update_property_this(this_ptr, SL("surname"), surname TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

