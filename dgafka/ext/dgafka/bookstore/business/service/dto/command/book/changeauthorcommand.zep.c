
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


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Command_Book_ChangeAuthorCommand) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book, ChangeAuthorCommand, dgafka, bookstore_business_service_dto_command_book_changeauthorcommand, dgafka_bookstore_business_service_dto_command_book_changeauthorcommand_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_changeauthorcommand_ce, SL("bookId"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_dto_command_book_changeauthorcommand_ce, SL("authorId"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Command_Book_ChangeAuthorCommand, __construct) {

	zval *bookId_param = NULL, *authorId_param = NULL;
	zval *bookId = NULL, *authorId = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &bookId_param, &authorId_param);

	zephir_get_strval(bookId, bookId_param);
	zephir_get_strval(authorId, authorId_param);


	zephir_update_property_this(this_ptr, SL("bookId"), bookId TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("authorId"), authorId TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

