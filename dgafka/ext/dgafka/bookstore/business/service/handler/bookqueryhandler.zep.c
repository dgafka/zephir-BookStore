
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


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Handler, BookQueryHandler, dgafka, bookstore_business_service_handler_bookqueryhandler, dgafka_bookstore_business_service_handler_bookqueryhandler_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_handler_bookqueryhandler_ce, SL("repository"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_handler_bookqueryhandler_ce, SL("converter"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler, __construct) {

	zval *repository, *converter;

	zephir_fetch_params(0, 2, 0, &repository, &converter);



	if (!(zephir_instance_of_ev(repository, dgafka_bookstore_business_service_repository_query_bookrepository_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'repository' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Repository\\Query\\BookRepository'", "", 0);
		return;
	}
	if (!(zephir_instance_of_ev(converter, dgafka_bookstore_business_service_service_converter_book_entitytodto_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'converter' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Service\\Converter\\Book\\EntityToDto'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("repository"), repository TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("converter"), converter TSRMLS_CC);

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler, handleGetByQuery) {

	HashTable *_4;
	HashPosition _3;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *query, *bookCollection = NULL, *book = NULL, *bookResults, *_0, *_1, *_2, **_5, *_6, *_7 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &query);



	if (!(zephir_instance_of_ev(query, dgafka_bookstore_business_service_dto_query_book_getbyquery_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'query' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Book\\GetByQuery'", "", 0);
		return;
	}
	ZEPHIR_INIT_VAR(bookResults);
	array_init(bookResults);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("repository"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_property(&_1, query, SL("orderBy"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_2);
	zephir_read_property(&_2, query, SL("type"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&bookCollection, _0, "findby", NULL, _1, _2);
	zephir_check_call_status();
	if (ZEPHIR_IS_EMPTY(bookCollection)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_notfoundexception_ce, "Results not found.", "dgafka/bookStore/business/service/handler/BookQueryHandler.zep", 27);
		return;
	}
	zephir_is_iterable(bookCollection, &_4, &_3, 0, 0, "dgafka/bookStore/business/service/handler/BookQueryHandler.zep", 34);
	for (
	  ; zephir_hash_get_current_data_ex(_4, (void**) &_5, &_3) == SUCCESS
	  ; zephir_hash_move_forward_ex(_4, &_3)
	) {
		ZEPHIR_GET_HVALUE(book, _5);
		_6 = zephir_fetch_nproperty_this(this_ptr, SL("converter"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_7, _6, "convert", NULL, book);
		zephir_check_call_status();
		zephir_array_append(&bookResults, _7, PH_SEPARATE, "dgafka/bookStore/business/service/handler/BookQueryHandler.zep", 31);
	}
	ZEPHIR_INIT_NVAR(bookCollection);
	object_init_ex(bookCollection, dgafka_bookstore_business_service_dto_bookcollection_ce);
	ZEPHIR_CALL_METHOD(NULL, bookCollection, "__construct", NULL, bookResults);
	zephir_check_call_status();
	RETURN_CCTOR(bookCollection);

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler, handleGetByIdQuery) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *query, *book = NULL, *_0, *_1, *_2, *_3 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &query);



	if (!(zephir_instance_of_ev(query, dgafka_bookstore_business_service_dto_query_book_getbyidquery_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'query' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Book\\GetByIdQuery'", "", 0);
		return;
	}
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("repository"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_property(&_1, query, SL("id"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&book, _0, "findbyid", NULL, _1);
	zephir_check_call_status();
	if (!(zephir_instance_of_ev(book, dgafka_bookstore_business_model_entity_book_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_notfoundexception_ce, "Results not found.", "dgafka/bookStore/business/service/handler/BookQueryHandler.zep", 45);
		return;
	}
	_2 = zephir_fetch_nproperty_this(this_ptr, SL("converter"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&_3, _2, "convert", NULL, book);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(book, _3);
	RETURN_CCTOR(book);

}

