
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
#include "kernel/exception.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/memory.h"


/**
* Domain entity
*/
ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Model_Entity_Book) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Model\\Entity, Book, dgafka, bookstore_business_model_entity_book, dgafka_bookstore_business_model_entity_book_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_model_entity_book_ce, SL("id"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_model_entity_book_ce, SL("author"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_model_entity_book_ce, SL("name"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_model_entity_book_ce, SL("description"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, __construct) {

	zval *id_param = NULL, *author, *name_param = NULL, *description_param = NULL;
	zval *id = NULL, *name = NULL, *description = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 4, 0, &id_param, &author, &name_param, &description_param);

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
	if (unlikely(Z_TYPE_P(description_param) != IS_STRING && Z_TYPE_P(description_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'description' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(description_param) == IS_STRING)) {
		zephir_get_strval(description, description_param);
	} else {
		ZEPHIR_INIT_VAR(description);
		ZVAL_EMPTY_STRING(description);
	}


	if (!(zephir_is_instance_of(author, SL("Dgafka\\BookStore\\Business\\Model\\Entity\\Dgafka\\BookStore\\Business\\Model\\Entity\\Author") TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'author' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\Entity\\Dgafka\\BookStore\\Business\\Model\\Entity\\Author'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("id"), id TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("author"), author TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("name"), name TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("description"), description TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, getId) {


	RETURN_MEMBER(this_ptr, "id");

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, getAuthor) {


	RETURN_MEMBER(this_ptr, "author");

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, getName) {


	RETURN_MEMBER(this_ptr, "name");

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, getDescription) {


	RETURN_MEMBER(this_ptr, "description");

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, setId) {

	zval *id_param = NULL;
	zval *id = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &id_param);

	zephir_get_strval(id, id_param);


	zephir_update_property_this(this_ptr, SL("id"), id TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, setAuthor) {

	zval *author;

	zephir_fetch_params(0, 1, 0, &author);



	if (!(zephir_is_instance_of(author, SL("Dgafka\\BookStore\\Business\\Model\\Entity\\Dgafka\\BookStore\\Business\\Model\\Entity\\Author") TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'author' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\Entity\\Dgafka\\BookStore\\Business\\Model\\Entity\\Author'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("author"), author TSRMLS_CC);

}

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, setName) {

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

PHP_METHOD(Dgafka_BookStore_Business_Model_Entity_Book, setDescription) {

	zval *description_param = NULL;
	zval *description = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &description_param);

	if (unlikely(Z_TYPE_P(description_param) != IS_STRING && Z_TYPE_P(description_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'description' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (likely(Z_TYPE_P(description_param) == IS_STRING)) {
		zephir_get_strval(description, description_param);
	} else {
		ZEPHIR_INIT_VAR(description);
		ZVAL_EMPTY_STRING(description);
	}


	zephir_update_property_this(this_ptr, SL("description"), description TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

