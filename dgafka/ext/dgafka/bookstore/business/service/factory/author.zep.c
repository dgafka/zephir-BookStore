
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
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Factory_Author) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Factory, Author, dgafka, bookstore_business_service_factory_author, dgafka_bookstore_business_service_factory_author_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Factory_Author, create) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *id_param = NULL, *name_param = NULL, *surname_param = NULL, *author;
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


	ZEPHIR_INIT_VAR(author);
	object_init_ex(author, dgafka_bookstore_business_model_entity_author_ce);
	ZEPHIR_CALL_METHOD(NULL, author, "__construct", NULL, id, name, surname);
	zephir_check_call_status();
	RETURN_CCTOR(author);

}

