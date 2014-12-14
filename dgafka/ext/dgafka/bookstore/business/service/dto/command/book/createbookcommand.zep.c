
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
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Command_Book_CreateBookCommand) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book, CreateBookCommand, dgafka, bookstore_business_service_dto_command_book_createbookcommand, dgafka_bookstore_business_service_dto_command_book_createbookcommand_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_createbookcommand_ce, SL("id"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_createbookcommand_ce, SL("author"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_createbookcommand_ce, SL("name"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_createbookcommand_ce, SL("description"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Command_Book_CreateBookCommand, __construct) {

	zval *name = NULL, *description = NULL;
	zval *guid, *author, *name_param = NULL, *description_param = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 4, 0, &guid, &author, &name_param, &description_param);

	zephir_get_strval(name, name_param);
	zephir_get_strval(description, description_param);


	if (!(zephir_instance_of_ev(guid, dgafka_bookstore_business_model_valueobject_guid_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'guid' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\ValueObject\\Guid'", "", 0);
		return;
	}
	if (!(zephir_instance_of_ev(author, dgafka_bookstore_business_model_entity_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'author' must be an instance of 'Dgafka\\BookStore\\Business\\Model\\Entity\\Author'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("id"), guid TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("author"), author TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("name"), name TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("description"), description TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

