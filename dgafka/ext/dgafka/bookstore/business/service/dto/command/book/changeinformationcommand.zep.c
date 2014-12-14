
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
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Command_Book_ChangeInformationCommand) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book, ChangeInformationCommand, dgafka, bookstore_business_service_dto_command_book_changeinformationcommand, dgafka_bookstore_business_service_dto_command_book_changeinformationcommand_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_changeinformationcommand_ce, SL("id"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_changeinformationcommand_ce, SL("name"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_changeinformationcommand_ce, SL("description"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Command_Book_ChangeInformationCommand, __construct) {

	zval *id_param = NULL, *name_param = NULL, *description_param = NULL;
	zval *id = NULL, *name = NULL, *description = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &id_param, &name_param, &description_param);

	zephir_get_strval(id, id_param);
	zephir_get_strval(name, name_param);
	zephir_get_strval(description, description_param);


	zephir_update_property_this(this_ptr, SL("id"), id TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("name"), name TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("description"), description TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

