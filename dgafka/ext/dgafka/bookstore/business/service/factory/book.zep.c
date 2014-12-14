
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
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Factory_Book) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Factory, Book, dgafka, bookstore_business_service_factory_book, dgafka_bookstore_business_service_factory_book_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Factory_Book, create) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *id_param = NULL, *author, *name_param = NULL, *description_param = NULL, *book;
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


	if (!(zephir_instance_of_ev(author, dgafka_bookstore_business_model_entity_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'author' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\Entity\\Author'", "", 0);
		return;
	}
	ZEPHIR_INIT_VAR(book);
	object_init_ex(book, dgafka_bookstore_business_model_entity_book_ce);
	ZEPHIR_CALL_METHOD(NULL, book, "__construct", NULL, id, author, name, description);
	zephir_check_call_status();
	RETURN_CCTOR(book);

}

