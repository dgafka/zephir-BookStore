
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
#include "kernel/exception.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Service_Converter_Book_EntityToDto) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Service\\Converter\\Book, EntityToDto, dgafka, bookstore_business_service_service_converter_book_entitytodto, dgafka_bookstore_business_service_service_converter_book_entitytodto_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_service_converter_book_entitytodto_ce, SL("authorConverter"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Service_Converter_Book_EntityToDto, __construct) {

	zval *authorConverter;

	zephir_fetch_params(0, 1, 0, &authorConverter);



	if (!(zephir_instance_of_ev(authorConverter, dgafka_bookstore_business_service_service_converter_author_entitytodto_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'authorConverter' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Service\\Converter\\Author\\EntityToDto'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("authorConverter"), authorConverter TSRMLS_CC);

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Service_Converter_Book_EntityToDto, convert) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *book, *bookDto, *authorDto = NULL, *_0, *_1 = NULL, *_2 = NULL, *_3 = NULL, *_4 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &book);



	if (!(zephir_instance_of_ev(book, dgafka_bookstore_business_model_entity_book_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'book' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\Entity\\Book'", "", 0);
		return;
	}
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("authorConverter"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&_1, book, "getauthor", NULL);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&authorDto, _0, "convert", NULL, _1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(bookDto);
	object_init_ex(bookDto, dgafka_bookstore_business_service_dto_book_ce);
	ZEPHIR_CALL_METHOD(&_2, book, "getid", NULL);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_3, book, "getname", NULL);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_4, book, "getdescription", NULL);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, bookDto, "__construct", NULL, _2, authorDto, _3, _4);
	zephir_check_call_status();
	RETURN_CCTOR(bookDto);

}

