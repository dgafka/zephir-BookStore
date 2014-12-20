
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
#include "kernel/hash.h"
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Handler, AuthorQueryHandler, dgafka, bookstore_business_service_handler_authorqueryhandler, dgafka_bookstore_business_service_handler_authorqueryhandler_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_handler_authorqueryhandler_ce, SL("repository"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_handler_authorqueryhandler_ce, SL("converter"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler, __construct) {

	zval *repository, *converter;

	zephir_fetch_params(0, 2, 0, &repository, &converter);



	if (!(zephir_instance_of_ev(repository, dgafka_bookstore_business_service_repository_query_authorrepository_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'repository' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Repository\\Query\\AuthorRepository'", "", 0);
		return;
	}
	if (!(zephir_instance_of_ev(converter, dgafka_bookstore_business_service_service_converter_author_entitytodto_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'converter' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Service\\Converter\\Author\\EntityToDto'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("repository"), repository TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("converter"), converter TSRMLS_CC);

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler, handleGetByQuery) {

	HashTable *_4;
	HashPosition _3;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *query, *authorCollection = NULL, *author = NULL, *authorResults, *_0, *_1, *_2, **_5, *_6, *_7 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &query);



	if (!(zephir_instance_of_ev(query, dgafka_bookstore_business_service_dto_query_author_getbyquery_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'query' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Author\\GetByQuery'", "", 0);
		return;
	}
	ZEPHIR_INIT_VAR(authorResults);
	array_init(authorResults);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("repository"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_property(&_1, query, SL("orderBy"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_2);
	zephir_read_property(&_2, query, SL("type"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&authorCollection, _0, "findby", NULL, _1, _2);
	zephir_check_call_status();
	if (ZEPHIR_IS_EMPTY(authorCollection)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_notfoundexception_ce, "Results not found.", "dgafka/bookStore/business/service/handler/AuthorQueryHandler.zep", 27);
		return;
	}
	zephir_is_iterable(authorCollection, &_4, &_3, 0, 0, "dgafka/bookStore/business/service/handler/AuthorQueryHandler.zep", 34);
	for (
	  ; zephir_hash_get_current_data_ex(_4, (void**) &_5, &_3) == SUCCESS
	  ; zephir_hash_move_forward_ex(_4, &_3)
	) {
		ZEPHIR_GET_HVALUE(author, _5);
		_6 = zephir_fetch_nproperty_this(this_ptr, SL("converter"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_7, _6, "convert", NULL, author);
		zephir_check_call_status();
		zephir_array_append(&authorResults, _7, PH_SEPARATE, "dgafka/bookStore/business/service/handler/AuthorQueryHandler.zep", 31);
	}
	ZEPHIR_INIT_NVAR(authorCollection);
	object_init_ex(authorCollection, dgafka_bookstore_business_service_dto_authorcollection_ce);
	ZEPHIR_CALL_METHOD(NULL, authorCollection, "__construct", NULL, authorResults);
	zephir_check_call_status();
	RETURN_CCTOR(authorCollection);

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler, handleGetByIdQuery) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *query, *author = NULL, *_0, *_1, *_2, *_3 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &query);



	if (!(zephir_instance_of_ev(query, dgafka_bookstore_business_service_dto_query_author_getbyidquery_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'query' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Author\\GetByIdQuery'", "", 0);
		return;
	}
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("repository"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_property(&_1, query, SL("id"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&author, _0, "findbyid", NULL, _1);
	zephir_check_call_status();
	if (!(zephir_instance_of_ev(author, dgafka_bookstore_business_model_entity_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_notfoundexception_ce, "Results not found.", "dgafka/bookStore/business/service/handler/AuthorQueryHandler.zep", 44);
		return;
	}
	_2 = zephir_fetch_nproperty_this(this_ptr, SL("converter"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&_3, _2, "convert", NULL, author);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(author, _3);
	RETURN_CCTOR(author);

}

