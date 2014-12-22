
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "kernel/concat.h"
#include "kernel/array.h"
#include "kernel/exception.h"
#include "kernel/hash.h"

ZEPHIR_INIT_CLASS(Dgafka_Test_Test) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\Test, Test, dgafka, test_test, dgafka_test_test_method_entry, 0);

	zend_declare_property_null(dgafka_test_test_ce, SL("repositories"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_test_test_ce, SL("factories"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_test_test_ce, SL("converters"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_test_test_ce, SL("handlers"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(dgafka_test_test_ce, SL("bus"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Dgafka_Test_Test, __construct) {

	zephir_nts_static zephir_fcall_cache_entry *_4 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0, *_1, *_2, *_3;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	array_init(_0);
	zephir_update_property_this(this_ptr, SL("handlers"), _0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	array_init(_1);
	zephir_update_property_this(this_ptr, SL("converters"), _1 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_2);
	array_init(_2);
	zephir_update_property_this(this_ptr, SL("factories"), _2 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_3);
	array_init(_3);
	zephir_update_property_this(this_ptr, SL("repositories"), _3 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "initialize", &_4);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_Test_Test, run) {

	HashTable *_29;
	HashPosition _28;
	zephir_fcall_cache_entry *_12 = NULL, *_24 = NULL, *_25 = NULL, *_26 = NULL, *_31 = NULL, *_35 = NULL, *_48 = NULL;
	zval *_7 = NULL, *_9 = NULL, *_11 = NULL, *_23 = NULL, *_27 = NULL;
	zephir_nts_static zephir_fcall_cache_entry *_1 = NULL, *_6 = NULL;
	zend_bool deletedTest, _2, _20, _42, _44, _46;
	zval *guid = NULL, *createAuthorCommand = NULL, *changeAuthorCommand = NULL, *createBookCommand = NULL, *findByIdAuthorQuery, *author = NULL, *book = NULL, *findByAuthorQuery, *results = NULL, *booksIds, *findByIdBookQuery = NULL, *findByBookQuery = NULL, *authorId = NULL, *changeInformationCommand = NULL, *bookId = NULL, *removeBookCommand = NULL, *_0 = NULL, *_5 = NULL, _8 = zval_used_for_init, _10 = zval_used_for_init, *_13, *_14, *_15, *_16 = NULL, *_17 = NULL, *_18, *_19 = NULL, **_30, *_32, *_33, *_34, *_36, *_37, *_38, *_39, *_40, *_41, *_43 = NULL, *_45 = NULL, *_47 = NULL, *_49, *_50, *_51;
	double start, finish;
	int testForAmount = 100, i = 0, ZEPHIR_LAST_CALL_STATUS, _3, _4, _21, _22;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_FUNCTION(&_0, "microtime", &_1, ZEPHIR_GLOBAL(global_true));
	zephir_check_call_status();
	start = zephir_get_doubleval(_0);
	_4 = testForAmount;
	_3 = 1;
	_2 = 0;
	if (_3 <= _4) {
		while (1) {
			if (_2) {
				_3++;
				if (!(_3 <= _4)) {
					break;
				}
			} else {
				_2 = 1;
			}
			i = _3;
			ZEPHIR_CALL_METHOD(&_5, this_ptr, "guidgenerator", &_6);
			zephir_check_call_status();
			zephir_get_strval(_7, _5);
			ZEPHIR_CPY_WRT(guid, _7);
			ZEPHIR_INIT_NVAR(createAuthorCommand);
			object_init_ex(createAuthorCommand, dgafka_bookstore_business_service_dto_command_author_createcommand_ce);
			ZEPHIR_SINIT_NVAR(_8);
			ZVAL_LONG(&_8, i);
			ZEPHIR_INIT_LNVAR(_9);
			ZEPHIR_CONCAT_SV(_9, "test-", &_8);
			ZEPHIR_SINIT_NVAR(_10);
			ZVAL_LONG(&_10, i);
			ZEPHIR_INIT_LNVAR(_11);
			ZEPHIR_CONCAT_SV(_11, "tester", &_10);
			ZEPHIR_CALL_METHOD(NULL, createAuthorCommand, "__construct", &_12, guid, _9, _11);
			zephir_check_call_status();
			_13 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
			_14 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
			zephir_array_fetch_string(&_15, _14, SL("commandAuthor"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 33 TSRMLS_CC);
			ZEPHIR_CALL_METHOD(NULL, _13, "execute", NULL, _15, createAuthorCommand);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_VAR(findByIdAuthorQuery);
	object_init_ex(findByIdAuthorQuery, dgafka_bookstore_business_service_dto_query_author_getbyidquery_ce);
	ZEPHIR_CALL_METHOD(NULL, findByIdAuthorQuery, "__construct", NULL, guid);
	zephir_check_call_status();
	_13 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
	_14 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
	zephir_array_fetch_string(&_15, _14, SL("queryAuthor"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 37 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&author, _13, "execute", NULL, _15, findByIdAuthorQuery);
	zephir_check_call_status();
	if (!(zephir_instance_of_ev(author, dgafka_bookstore_business_service_dto_author_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Test Failed! Author not found!", "dgafka/test/test.zep", 39);
		return;
	}
	ZEPHIR_INIT_VAR(findByAuthorQuery);
	object_init_ex(findByAuthorQuery, dgafka_bookstore_business_service_dto_query_author_getbyquery_ce);
	ZEPHIR_INIT_VAR(_16);
	ZVAL_STRING(_16, "name", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_17);
	ZVAL_STRING(_17, "desc", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(NULL, findByAuthorQuery, "__construct", NULL, _16, _17);
	zephir_check_temp_parameter(_16);
	zephir_check_temp_parameter(_17);
	zephir_check_call_status();
	_13 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
	_14 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
	zephir_array_fetch_string(&_15, _14, SL("queryAuthor"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 43 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&results, _13, "execute", NULL, _15, findByAuthorQuery);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(_18);
	zephir_read_property(&_18, results, SL("authors"), PH_NOISY_CC);
	if (zephir_fast_count_int(_18 TSRMLS_CC) != testForAmount) {
		ZEPHIR_OBS_VAR(_19);
		zephir_read_property(&_19, results, SL("authors"), PH_NOISY_CC);
		php_printf("%d", zephir_fast_count_int(_19 TSRMLS_CC));
		ZEPHIR_INIT_NVAR(_16);
		object_init_ex(_16, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_SINIT_NVAR(_8);
		ZVAL_LONG(&_8, testForAmount);
		ZEPHIR_INIT_LNVAR(_9);
		ZEPHIR_CONCAT_SV(_9, "Test Failed! All authors have not been added properly. Expected: ", &_8);
		ZEPHIR_CALL_METHOD(NULL, _16, "__construct", NULL, _9);
		zephir_check_call_status();
		zephir_throw_exception_debug(_16, "dgafka/test/test.zep", 47 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_INIT_VAR(booksIds);
	array_init(booksIds);
	_22 = testForAmount;
	_21 = 1;
	_20 = 0;
	if (_21 <= _22) {
		while (1) {
			if (_20) {
				_21++;
				if (!(_21 <= _22)) {
					break;
				}
			} else {
				_20 = 1;
			}
			i = _21;
			ZEPHIR_CALL_METHOD(&_5, this_ptr, "guidgenerator", &_6);
			zephir_check_call_status();
			zephir_get_strval(_23, _5);
			ZEPHIR_CPY_WRT(guid, _23);
			zephir_array_append(&booksIds, guid, PH_SEPARATE, "dgafka/test/test.zep", 56);
			ZEPHIR_INIT_NVAR(createBookCommand);
			object_init_ex(createBookCommand, dgafka_bookstore_business_service_dto_command_book_createcommand_ce);
			ZEPHIR_OBS_NVAR(_19);
			zephir_read_property(&_19, author, SL("id"), PH_NOISY_CC);
			ZEPHIR_SINIT_NVAR(_8);
			ZVAL_LONG(&_8, i);
			ZEPHIR_INIT_LNVAR(_9);
			ZEPHIR_CONCAT_SV(_9, "book", &_8);
			ZEPHIR_SINIT_NVAR(_10);
			ZVAL_LONG(&_10, i);
			ZEPHIR_INIT_LNVAR(_11);
			ZEPHIR_CONCAT_SV(_11, "book test description: ", &_10);
			ZEPHIR_CALL_METHOD(NULL, createBookCommand, "__construct", &_24, guid, _19, _9, _11);
			zephir_check_call_status();
			_13 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
			_14 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
			zephir_array_fetch_string(&_15, _14, SL("commandBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 58 TSRMLS_CC);
			ZEPHIR_CALL_METHOD(NULL, _13, "execute", NULL, _15, createBookCommand);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_VAR(findByIdBookQuery);
	object_init_ex(findByIdBookQuery, dgafka_bookstore_business_service_dto_query_book_getbyidquery_ce);
	ZEPHIR_CALL_METHOD(NULL, findByIdBookQuery, "__construct", &_25, guid);
	zephir_check_call_status();
	_13 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
	_14 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
	zephir_array_fetch_string(&_15, _14, SL("queryBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 62 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&book, _13, "execute", NULL, _15, findByIdBookQuery);
	zephir_check_call_status();
	if (!(zephir_instance_of_ev(book, dgafka_bookstore_business_service_dto_book_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Test Failed! Book not found!", "dgafka/test/test.zep", 64);
		return;
	}
	ZEPHIR_INIT_VAR(findByBookQuery);
	object_init_ex(findByBookQuery, dgafka_bookstore_business_service_dto_query_book_getbyquery_ce);
	ZEPHIR_INIT_NVAR(_16);
	ZVAL_STRING(_16, "name", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_17);
	ZVAL_STRING(_17, "desc", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(NULL, findByBookQuery, "__construct", &_26, _16, _17);
	zephir_check_temp_parameter(_16);
	zephir_check_temp_parameter(_17);
	zephir_check_call_status();
	_13 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
	_14 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
	zephir_array_fetch_string(&_15, _14, SL("queryBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 68 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&results, _13, "execute", NULL, _15, findByBookQuery);
	zephir_check_call_status();
	ZEPHIR_OBS_NVAR(_19);
	zephir_read_property(&_19, results, SL("books"), PH_NOISY_CC);
	if (zephir_fast_count_int(_19 TSRMLS_CC) != testForAmount) {
		ZEPHIR_INIT_NVAR(_16);
		object_init_ex(_16, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_SINIT_NVAR(_8);
		ZVAL_LONG(&_8, testForAmount);
		ZEPHIR_INIT_LNVAR(_9);
		ZEPHIR_CONCAT_SV(_9, "Test Failed! All books have not been added properly. Expected: ", &_8);
		ZEPHIR_CALL_METHOD(NULL, _16, "__construct", NULL, _9);
		zephir_check_call_status();
		zephir_throw_exception_debug(_16, "dgafka/test/test.zep", 70 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_CALL_METHOD(&_5, this_ptr, "guidgenerator", &_6);
	zephir_check_call_status();
	zephir_get_strval(_27, _5);
	ZEPHIR_CPY_WRT(authorId, _27);
	ZEPHIR_INIT_NVAR(createAuthorCommand);
	object_init_ex(createAuthorCommand, dgafka_bookstore_business_service_dto_command_author_createcommand_ce);
	ZEPHIR_SINIT_NVAR(_8);
	ZVAL_LONG(&_8, i);
	ZEPHIR_INIT_LNVAR(_9);
	ZEPHIR_CONCAT_SV(_9, "test-", &_8);
	ZEPHIR_SINIT_NVAR(_10);
	ZVAL_LONG(&_10, i);
	ZEPHIR_INIT_LNVAR(_11);
	ZEPHIR_CONCAT_SV(_11, "tester", &_10);
	ZEPHIR_CALL_METHOD(NULL, createAuthorCommand, "__construct", &_12, authorId, _9, _11);
	zephir_check_call_status();
	_13 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
	_14 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
	zephir_array_fetch_string(&_15, _14, SL("commandAuthor"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 75 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, _13, "execute", NULL, _15, createAuthorCommand);
	zephir_check_call_status();
	zephir_is_iterable(booksIds, &_29, &_28, 0, 0, "dgafka/test/test.zep", 94);
	for (
	  ; zephir_hash_get_current_data_ex(_29, (void**) &_30, &_28) == SUCCESS
	  ; zephir_hash_move_forward_ex(_29, &_28)
	) {
		ZEPHIR_GET_HVALUE(bookId, _30);
		ZEPHIR_INIT_NVAR(changeAuthorCommand);
		object_init_ex(changeAuthorCommand, dgafka_bookstore_business_service_dto_command_book_changeauthorcommand_ce);
		ZEPHIR_CALL_METHOD(NULL, changeAuthorCommand, "__construct", &_31, bookId, authorId);
		zephir_check_call_status();
		_32 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
		_33 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
		zephir_array_fetch_string(&_34, _33, SL("commandBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 79 TSRMLS_CC);
		ZEPHIR_CALL_METHOD(NULL, _32, "execute", NULL, _34, changeAuthorCommand);
		zephir_check_call_status();
		ZEPHIR_INIT_NVAR(changeInformationCommand);
		object_init_ex(changeInformationCommand, dgafka_bookstore_business_service_dto_command_book_changeinformationcommand_ce);
		ZEPHIR_INIT_NVAR(_16);
		ZVAL_STRING(_16, "tested", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_INIT_NVAR(_17);
		ZVAL_STRING(_17, "well", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, changeInformationCommand, "__construct", &_35, bookId, _16, _17);
		zephir_check_temp_parameter(_16);
		zephir_check_temp_parameter(_17);
		zephir_check_call_status();
		_36 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
		_37 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
		zephir_array_fetch_string(&_38, _37, SL("commandBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 82 TSRMLS_CC);
		ZEPHIR_CALL_METHOD(NULL, _36, "execute", NULL, _38, changeInformationCommand);
		zephir_check_call_status();
		ZEPHIR_INIT_NVAR(findByIdBookQuery);
		object_init_ex(findByIdBookQuery, dgafka_bookstore_business_service_dto_query_book_getbyidquery_ce);
		ZEPHIR_CALL_METHOD(NULL, findByIdBookQuery, "__construct", &_25, bookId);
		zephir_check_call_status();
		_39 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
		_40 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
		zephir_array_fetch_string(&_41, _40, SL("queryBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 85 TSRMLS_CC);
		ZEPHIR_CALL_METHOD(&book, _39, "execute", NULL, _41, findByIdBookQuery);
		zephir_check_call_status();
		_42 = !(zephir_instance_of_ev(book, dgafka_bookstore_business_service_dto_book_ce TSRMLS_CC));
		if (!(_42)) {
			ZEPHIR_OBS_NVAR(_19);
			zephir_read_property(&_19, book, SL("author"), PH_NOISY_CC);
			ZEPHIR_OBS_NVAR(_43);
			zephir_read_property(&_43, _19, SL("id"), PH_NOISY_CC);
			_42 = !ZEPHIR_IS_EQUAL(_43, authorId);
		}
		_44 = _42;
		if (!(_44)) {
			ZEPHIR_OBS_NVAR(_45);
			zephir_read_property(&_45, book, SL("name"), PH_NOISY_CC);
			_44 = !ZEPHIR_IS_STRING_IDENTICAL(_45, "tested");
		}
		_46 = _44;
		if (!(_46)) {
			ZEPHIR_OBS_NVAR(_47);
			zephir_read_property(&_47, book, SL("description"), PH_NOISY_CC);
			_46 = !ZEPHIR_IS_STRING(_47, "well");
		}
		if (_46) {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Test Failed! Book not found!", "dgafka/test/test.zep", 87);
			return;
		}
		ZEPHIR_INIT_NVAR(removeBookCommand);
		object_init_ex(removeBookCommand, dgafka_bookstore_business_service_dto_command_book_removecommand_ce);
		ZEPHIR_CALL_METHOD(NULL, removeBookCommand, "__construct", &_48, bookId);
		zephir_check_call_status();
		_49 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
		_50 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
		zephir_array_fetch_string(&_51, _50, SL("commandBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 91 TSRMLS_CC);
		ZEPHIR_CALL_METHOD(NULL, _49, "execute", NULL, _51, removeBookCommand);
		zephir_check_call_status();
	}
	deletedTest = 0;

	/* try_start_1: */

		ZEPHIR_INIT_NVAR(findByBookQuery);
		object_init_ex(findByBookQuery, dgafka_bookstore_business_service_dto_query_book_getbyquery_ce);
		ZEPHIR_INIT_NVAR(_16);
		ZVAL_STRING(_16, "name", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_INIT_NVAR(_17);
		ZVAL_STRING(_17, "desc", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, findByBookQuery, "__construct", &_26, _16, _17);
		zephir_check_temp_parameter(_16);
		zephir_check_temp_parameter(_17);
		zephir_check_call_status_or_jump(try_end_1);
		_13 = zephir_fetch_nproperty_this(this_ptr, SL("bus"), PH_NOISY_CC);
		_14 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
		zephir_array_fetch_string(&_15, _14, SL("queryBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 97 TSRMLS_CC);
		ZEPHIR_CALL_METHOD(&results, _13, "execute", NULL, _15, findByBookQuery);
		zephir_check_call_status_or_jump(try_end_1);

	try_end_1:

	if (EG(exception)) {
		ZEPHIR_INIT_NVAR(_16);
		ZEPHIR_CPY_WRT(_16, EG(exception));
		if (zephir_instance_of_ev(_16, dgafka_bookstore_business_service_handler_exception_notfoundexception_ce TSRMLS_CC)) {
			zend_clear_exception(TSRMLS_C);
			deletedTest = 1;
		}
	}
	if (!deletedTest) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Test Failed! All books have not been deleted properly.", "dgafka/test/test.zep", 103);
		return;
	}
	ZEPHIR_CALL_FUNCTION(&_5, "microtime", &_1, ZEPHIR_GLOBAL(global_true));
	zephir_check_call_status();
	finish = zephir_get_doubleval(_5);
	ZEPHIR_SINIT_NVAR(_8);
	ZVAL_LONG(&_8, testForAmount);
	ZEPHIR_INIT_LNVAR(_9);
	ZEPHIR_CONCAT_SVS(_9, "\nApplication has ended without errors for test loops: ", &_8, " \n");
	zend_print_zval(_9, 0);
	finish = ((finish - start));
	php_printf("%s", "\nTime to finish took: ms\n\n");
	php_printf("%f", finish);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Dgafka_Test_Test, guidGenerator) {

	zval *_6 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	zephir_nts_static zephir_fcall_cache_entry *_1 = NULL, *_3 = NULL, *_5 = NULL;
	zval *_0 = NULL, *_2 = NULL, *_4 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_FUNCTION(&_0, "rand", &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_2, "uniqid", &_3, _0, ZEPHIR_GLOBAL(global_true));
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_4, "md5", &_5, _2);
	zephir_check_call_status();
	zephir_get_strval(_6, _4);
	RETURN_CTOR(_6);

}

PHP_METHOD(Dgafka_Test_Test, initialize) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_1 = NULL, *_4, *_5, *_6, *_8, *_9, *_10, *_11, *_12, *_13, *_14, *_15, *_16, *_17, *_18, *_19, *_20, *_21, *_22, *_23, *_24, *_25, *_26, *_27, *_28, *_29;
	zval *_0, *_2, *_3, *_7;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	array_init_size(_0, 6);
	ZEPHIR_INIT_VAR(_1);
	object_init_ex(_1, dgafka_bookstore_application_inmemory_repository_command_authorrepository_ce);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL);
	zephir_check_call_status();
	zephir_array_update_string(&_0, SL("commandAuthor"), &_1, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL);
	zephir_check_call_status();
	zephir_array_update_string(&_0, SL("commandBook"), &_1, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_application_inmemory_repository_query_authorrepository_ce);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL);
	zephir_check_call_status();
	zephir_array_update_string(&_0, SL("queryAuthor"), &_1, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL);
	zephir_check_call_status();
	zephir_array_update_string(&_0, SL("queryBook"), &_1, PH_COPY | PH_SEPARATE);
	zephir_update_property_this(this_ptr, SL("repositories"), _0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_2);
	array_init_size(_2, 3);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_business_service_factory_author_ce);
	if (zephir_has_constructor(_1 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL);
		zephir_check_call_status();
	}
	zephir_array_update_string(&_2, SL("factoryAuthor"), &_1, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_business_service_factory_book_ce);
	if (zephir_has_constructor(_1 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL);
		zephir_check_call_status();
	}
	zephir_array_update_string(&_2, SL("factoryBook"), &_1, PH_COPY | PH_SEPARATE);
	zephir_update_property_this(this_ptr, SL("factories"), _2 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_3);
	array_init_size(_3, 2);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_business_service_service_converter_author_entitytodto_ce);
	if (zephir_has_constructor(_1 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL);
		zephir_check_call_status();
	}
	zephir_array_update_string(&_3, SL("author"), &_1, PH_COPY | PH_SEPARATE);
	zephir_update_property_this(this_ptr, SL("converters"), _3 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_business_service_service_converter_book_entitytodto_ce);
	_4 = zephir_fetch_nproperty_this(this_ptr, SL("converters"), PH_NOISY_CC);
	zephir_array_fetch_string(&_5, _4, SL("author"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 136 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL, _5);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(_6);
	ZVAL_STRING(_6, "book", 1);
	zephir_update_property_array(this_ptr, SL("converters"), _6, _1 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_7);
	array_init_size(_7, 6);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_business_service_handler_authorcommandhandler_ce);
	_8 = zephir_fetch_nproperty_this(this_ptr, SL("repositories"), PH_NOISY_CC);
	zephir_array_fetch_string(&_9, _8, SL("commandAuthor"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 140 TSRMLS_CC);
	_10 = zephir_fetch_nproperty_this(this_ptr, SL("factories"), PH_NOISY_CC);
	zephir_array_fetch_string(&_11, _10, SL("factoryAuthor"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 140 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL, _9, _11);
	zephir_check_call_status();
	zephir_array_update_string(&_7, SL("commandAuthor"), &_1, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_business_service_handler_bookcommandhandler_ce);
	_12 = zephir_fetch_nproperty_this(this_ptr, SL("repositories"), PH_NOISY_CC);
	zephir_array_fetch_string(&_13, _12, SL("commandBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 141 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL, _13);
	zephir_check_call_status();
	zephir_array_update_string(&_7, SL("commandBook"), &_1, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_business_service_handler_authorqueryhandler_ce);
	_14 = zephir_fetch_nproperty_this(this_ptr, SL("repositories"), PH_NOISY_CC);
	zephir_array_fetch_string(&_15, _14, SL("queryAuthor"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 142 TSRMLS_CC);
	_16 = zephir_fetch_nproperty_this(this_ptr, SL("converters"), PH_NOISY_CC);
	zephir_array_fetch_string(&_17, _16, SL("author"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 142 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL, _15, _17);
	zephir_check_call_status();
	zephir_array_update_string(&_7, SL("queryAuthor"), &_1, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_business_service_handler_bookqueryhandler_ce);
	_18 = zephir_fetch_nproperty_this(this_ptr, SL("repositories"), PH_NOISY_CC);
	zephir_array_fetch_string(&_19, _18, SL("queryBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 143 TSRMLS_CC);
	_20 = zephir_fetch_nproperty_this(this_ptr, SL("converters"), PH_NOISY_CC);
	zephir_array_fetch_string(&_21, _20, SL("book"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 143 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL, _19, _21);
	zephir_check_call_status();
	zephir_array_update_string(&_7, SL("queryBook"), &_1, PH_COPY | PH_SEPARATE);
	zephir_update_property_this(this_ptr, SL("handlers"), _7 TSRMLS_CC);
	_22 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
	zephir_array_fetch_string(&_23, _22, SL("commandBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 146 TSRMLS_CC);
	_24 = zephir_fetch_nproperty_this(this_ptr, SL("factories"), PH_NOISY_CC);
	zephir_array_fetch_string(&_25, _24, SL("factoryBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 146 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, _23, "setbookfactory", NULL, _25);
	zephir_check_call_status();
	_26 = zephir_fetch_nproperty_this(this_ptr, SL("handlers"), PH_NOISY_CC);
	zephir_array_fetch_string(&_27, _26, SL("commandBook"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 147 TSRMLS_CC);
	_28 = zephir_fetch_nproperty_this(this_ptr, SL("repositories"), PH_NOISY_CC);
	zephir_array_fetch_string(&_29, _28, SL("queryAuthor"), PH_NOISY | PH_READONLY, "dgafka/test/test.zep", 147 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, _27, "setauthorrepository", NULL, _29);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(_1);
	object_init_ex(_1, dgafka_bookstore_business_service_service_commandquerybus_ce);
	if (zephir_has_constructor(_1 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL);
		zephir_check_call_status();
	}
	zephir_update_property_this(this_ptr, SL("bus"), _1 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

