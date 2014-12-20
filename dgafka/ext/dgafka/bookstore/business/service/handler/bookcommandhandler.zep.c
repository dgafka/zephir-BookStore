
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
#include "kernel/operators.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Handler_BookCommandHandler) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Handler, BookCommandHandler, dgafka, bookstore_business_service_handler_bookcommandhandler, dgafka_bookstore_business_service_handler_bookcommandhandler_method_entry, 0);

	zend_declare_property_null(dgafka_bookstore_business_service_handler_bookcommandhandler_ce, SL("bookRepository"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_handler_bookcommandhandler_ce, SL("authorRepository"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_bookstore_business_service_handler_bookcommandhandler_ce, SL("factory"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookCommandHandler, __construct) {

	zval *repository;

	zephir_fetch_params(0, 1, 0, &repository);



	if (!(zephir_instance_of_ev(repository, dgafka_bookstore_business_service_repository_command_bookrepository_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'repository' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Repository\\Command\\BookRepository'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("bookRepository"), repository TSRMLS_CC);

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookCommandHandler, handleCreateCommand) {

	int ZEPHIR_LAST_CALL_STATUS;
	zend_bool _1;
	zval *command, *author = NULL, *book = NULL, *_0, *_2, *_3, *_4, *_5, *_6, *_7, *_8, *_9;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &command);



	if (!(zephir_instance_of_ev(command, dgafka_bookstore_business_service_dto_command_book_createcommand_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'command' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book\\CreateCommand'", "", 0);
		return;
	}
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("authorRepository"), PH_NOISY_CC);
	_1 = !zephir_is_true(_0);
	if (!(_1)) {
		_2 = zephir_fetch_nproperty_this(this_ptr, SL("factory"), PH_NOISY_CC);
		_1 = !zephir_is_true(_2);
	}
	if (_1) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_dependencyinjectionexception_ce, "Inject all dependencies, via setter first.", "dgafka/bookStore/business/service/handler/BookCommandHandler.zep", 24);
		return;
	}
	_3 = zephir_fetch_nproperty_this(this_ptr, SL("authorRepository"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_4);
	zephir_read_property(&_4, command, SL("author"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&author, _3, "findbyid", NULL, _4);
	zephir_check_call_status();
	if (!(zephir_instance_of_ev(author, dgafka_bookstore_business_model_entity_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_notfoundexception_ce, "Author doesn't exist", "dgafka/bookStore/business/service/handler/BookCommandHandler.zep", 29);
		return;
	}
	_5 = zephir_fetch_nproperty_this(this_ptr, SL("factory"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_6);
	zephir_read_property(&_6, command, SL("id"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_7);
	zephir_read_property(&_7, command, SL("name"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_8);
	zephir_read_property(&_8, command, SL("description"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&book, _5, "create", NULL, _6, author, _7, _8);
	zephir_check_call_status();
	_9 = zephir_fetch_nproperty_this(this_ptr, SL("bookRepository"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, _9, "save", NULL, book);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookCommandHandler, handleChangeAuthorCommand) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *command, *book = NULL, *author = NULL, *_0, *_1, *_2, *_3, *_4, *_5;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &command);



	if (!(zephir_instance_of_ev(command, dgafka_bookstore_business_service_dto_command_book_changeauthorcommand_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'command' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book\\ChangeAuthorCommand'", "", 0);
		return;
	}
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("authorRepository"), PH_NOISY_CC);
	if (!zephir_is_true(_0)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_dependencyinjectionexception_ce, "Inject all dependencies, via setter first.", "dgafka/bookStore/business/service/handler/BookCommandHandler.zep", 41);
		return;
	}
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("authorRepository"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_2);
	zephir_read_property(&_2, command, SL("authorId"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&author, _1, "findbyid", NULL, _2);
	zephir_check_call_status();
	if (!(zephir_instance_of_ev(author, dgafka_bookstore_business_model_entity_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_notfoundexception_ce, "Author doesn't exist", "dgafka/bookStore/business/service/handler/BookCommandHandler.zep", 46);
		return;
	}
	_3 = zephir_fetch_nproperty_this(this_ptr, SL("bookRepository"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_4);
	zephir_read_property(&_4, command, SL("bookId"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&book, _3, "findbyid", NULL, _4);
	zephir_check_call_status();
	if (!(zephir_instance_of_ev(book, dgafka_bookstore_business_model_entity_book_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_notfoundexception_ce, "Book doesn't exist.", "dgafka/bookStore/business/service/handler/BookCommandHandler.zep", 52);
		return;
	}
	ZEPHIR_CALL_METHOD(NULL, book, "setauthor", NULL, author);
	zephir_check_call_status();
	_5 = zephir_fetch_nproperty_this(this_ptr, SL("bookRepository"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, _5, "save", NULL, book);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookCommandHandler, handleRemoveCommand) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *command, *book = NULL, *_0, *_1, *_2;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &command);



	if (!(zephir_instance_of_ev(command, dgafka_bookstore_business_service_dto_command_book_removecommand_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'command' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book\\RemoveCommand'", "", 0);
		return;
	}
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("bookRepository"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_property(&_1, command, SL("id"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&book, _0, "findbyid", NULL, _1);
	zephir_check_call_status();
	if (!(zephir_instance_of_ev(book, dgafka_bookstore_business_model_entity_book_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_notfoundexception_ce, "Book doesn't exist.", "dgafka/bookStore/business/service/handler/BookCommandHandler.zep", 65);
		return;
	}
	_2 = zephir_fetch_nproperty_this(this_ptr, SL("bookRepository"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, _2, "remove", NULL, book);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookCommandHandler, handleChangeInformationCommand) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *command, *book = NULL, *_0, *_1, *_2, *_3, *_4;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &command);



	if (!(zephir_instance_of_ev(command, dgafka_bookstore_business_service_dto_command_book_changeinformationcommand_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter 'command' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Dto\\Command\\Book\\ChangeInformationCommand'", "", 0);
		return;
	}
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("bookRepository"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(_1);
	zephir_read_property(&_1, command, SL("id"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&book, _0, "findbyid", NULL, _1);
	zephir_check_call_status();
	if (!(zephir_instance_of_ev(book, dgafka_bookstore_business_model_entity_book_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(dgafka_bookstore_business_service_handler_exception_notfoundexception_ce, "Book doesn't exist.", "dgafka/bookStore/business/service/handler/BookCommandHandler.zep", 77);
		return;
	}
	ZEPHIR_OBS_VAR(_2);
	zephir_read_property(&_2, command, SL("name"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, book, "setname", NULL, _2);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(_3);
	zephir_read_property(&_3, command, SL("description"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, book, "setdescription", NULL, _3);
	zephir_check_call_status();
	_4 = zephir_fetch_nproperty_this(this_ptr, SL("bookRepository"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, _4, "save", NULL, book);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookCommandHandler, setBookFactory) {

	zval *bookFactory;

	zephir_fetch_params(0, 1, 0, &bookFactory);



	if (!(zephir_instance_of_ev(bookFactory, dgafka_bookstore_business_service_factory_book_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'bookFactory' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Factory\\Book'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("factory"), bookFactory TSRMLS_CC);

}

PHP_METHOD(Dgafka_BookStore_Business_Service_Handler_BookCommandHandler, setAuthorRepository) {

	zval *repository;

	zephir_fetch_params(0, 1, 0, &repository);



	if (!(zephir_instance_of_ev(repository, dgafka_bookstore_business_service_repository_query_authorrepository_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Parameter 'repository' must be an instance of 'Dgafka\\BookStore\\Business\\Service\\Repository\\Query\\AuthorRepository'", "", 0);
		return;
	}
	zephir_update_property_this(this_ptr, SL("authorRepository"), repository TSRMLS_CC);

}

