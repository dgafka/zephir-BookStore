
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


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Handler_AuthorCommandHandler) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Handler, AuthorCommandHandler, dgafka, bookstore_business_service_handler_authorcommandhandler, dgafka_bookstore_business_service_handler_authorcommandhandler_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_handler_authorcommandhandler_ce, SL("repository"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_handler_authorcommandhandler_ce, SL("factory"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorCommandHandler, __construct) {

	zval *repository, *authorFactory;

	zephir_fetch_params(0, 2, 0, &repository, &authorFactory);



	if (!(zephir_instance_of_ev(repository, dgafka_bookstore_business_service_repository_command_authorrepository_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'repository' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Repository\\Command\\AuthorRepository'", "", 0);
		return;
	}
	if (!(zephir_instance_of_ev(authorFactory, dgafka_bookstore_business_service_factory_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'authorFactory' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Factory\\Author'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("repository"), repository TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("factory"), authorFactory TSRMLS_CC);

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_AuthorCommandHandler, handleCreateCommand) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *command, *author = NULL, *_0, *_1, *_2, *_3, *_4;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &command);



	if (!(zephir_instance_of_ev(command, dgafka_bookstore_business_service_dto_command_author_createcommand_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'command' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Author\\CreateCommand'", "", 0);
		return;
	}
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("factory"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_property(&_1, command, SL("id"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_2);
	zephir_read_property(&_2, command, SL("name"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_3);
	zephir_read_property(&_3, command, SL("surname"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&author, _0, "create", NULL, _1, _2, _3);
	zephir_check_call_status();
	_4 = zephir_fetch_nproperty_this(this_ptr, SL("repository"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, _4, "save", NULL, author);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

