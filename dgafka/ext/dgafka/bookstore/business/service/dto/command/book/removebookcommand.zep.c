
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


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Command_Book_RemoveBookCommand) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book, RemoveBookCommand, dgafka, bookstore_business_service_dto_command_book_removebookcommand, dgafka_bookstore_business_service_dto_command_book_removebookcommand_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_removebookcommand_ce, SL("id"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Command_Book_RemoveBookCommand, __construct) {

	zval *guid;

	zephir_fetch_params(0, 1, 0, &guid);



	if (!(zephir_is_instance_of(guid, SL("Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book\\ValueObject\\Guid") TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'guid' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book\\ValueObject\\Guid'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("id"), guid TSRMLS_CC);

}

