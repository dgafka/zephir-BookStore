
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


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Service_Converter_Author_EntityToDto) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Service\\Converter\\Author, EntityToDto, dgafka, bookstore_business_service_service_converter_author_entitytodto, dgafka_bookstore_business_service_service_converter_author_entitytodto_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Service_Converter_Author_EntityToDto, convert) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *author, *authorDto, *_0 = NULL, *_1 = NULL, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &author);



	if (!(zephir_instance_of_ev(author, dgafka_bookstore_business_model_entity_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'author' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\Entity\\Author'", "", 0);
		return;
	}
	ZEPHIR_INIT_VAR(authorDto);
	object_init_ex(authorDto, dgafka_bookstore_business_service_dto_author_ce);
	ZEPHIR_CALL_METHOD(&_0, author, "getid", NULL);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, author, "getname", NULL);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, author, "getsurname", NULL);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, authorDto, "__construct", NULL, _0, _1, _2);
	zephir_check_call_status();
	RETURN_CCTOR(authorDto);

}

