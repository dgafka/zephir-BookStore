
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "dgafka.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *dgafka_bookstore_business_service_repository_command_authorrepository_ce;
zend_class_entry *dgafka_bookstore_business_service_repository_command_bookrepository_ce;
zend_class_entry *dgafka_bookstore_business_service_repository_query_authorrepository_ce;
zend_class_entry *dgafka_bookstore_business_service_repository_query_bookrepository_ce;
zend_class_entry *dgafka_bookstore_application_inmemory_repository_command_authorrepository_ce;
zend_class_entry *dgafka_bookstore_application_inmemory_repository_command_bookrepository_ce;
zend_class_entry *dgafka_bookstore_application_inmemory_repository_query_authorrepository_ce;
zend_class_entry *dgafka_bookstore_application_inmemory_repository_query_bookrepository_ce;
zend_class_entry *dgafka_bookstore_business_model_entity_author_ce;
zend_class_entry *dgafka_bookstore_business_model_entity_book_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_author_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_authorcollection_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_book_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_bookcollection_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_command_author_createcommand_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_command_book_changeauthorcommand_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_command_book_changeinformationcommand_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_command_book_createcommand_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_command_book_removecommand_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_query_author_getbyidquery_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_query_author_getbyquery_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_query_book_getbyidquery_ce;
zend_class_entry *dgafka_bookstore_business_service_dto_query_book_getbyquery_ce;
zend_class_entry *dgafka_bookstore_business_service_factory_author_ce;
zend_class_entry *dgafka_bookstore_business_service_factory_book_ce;
zend_class_entry *dgafka_bookstore_business_service_handler_authorcommandhandler_ce;
zend_class_entry *dgafka_bookstore_business_service_handler_authorqueryhandler_ce;
zend_class_entry *dgafka_bookstore_business_service_handler_bookcommandhandler_ce;
zend_class_entry *dgafka_bookstore_business_service_handler_bookqueryhandler_ce;
zend_class_entry *dgafka_bookstore_business_service_handler_exception_dependencyinjectionexception_ce;
zend_class_entry *dgafka_bookstore_business_service_handler_exception_notfoundexception_ce;
zend_class_entry *dgafka_bookstore_business_service_service_commandquerybus_ce;
zend_class_entry *dgafka_bookstore_business_service_service_converter_author_entitytodto_ce;
zend_class_entry *dgafka_bookstore_business_service_service_converter_book_entitytodto_ce;
zend_class_entry *dgafka_bookstore_business_service_service_exception_classnotfoundexception_ce;
zend_class_entry *dgafka_test_test_ce;

ZEND_DECLARE_MODULE_GLOBALS(dgafka)

static PHP_MINIT_FUNCTION(dgafka)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif

	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Repository_Command_AuthorRepository);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Repository_Command_BookRepository);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Repository_Query_AuthorRepository);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Repository_Query_BookRepository);
	ZEPHIR_INIT(Dgafka_BookStore_Application_InMemory_Repository_Command_AuthorRepository);
	ZEPHIR_INIT(Dgafka_BookStore_Application_InMemory_Repository_Command_BookRepository);
	ZEPHIR_INIT(Dgafka_BookStore_Application_InMemory_Repository_Query_AuthorRepository);
	ZEPHIR_INIT(Dgafka_BookStore_Application_InMemory_Repository_Query_BookRepository);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Model_Entity_Author);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Model_Entity_Book);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Author);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_AuthorCollection);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Book);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_BookCollection);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Command_Author_CreateCommand);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Command_Book_ChangeAuthorCommand);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Command_Book_ChangeInformationCommand);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Command_Book_CreateCommand);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Command_Book_RemoveCommand);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Query_Author_GetByIdQuery);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Query_Author_GetByQuery);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Query_Book_GetByIdQuery);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Dto_Query_Book_GetByQuery);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Factory_Author);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Factory_Book);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Handler_AuthorCommandHandler);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Handler_AuthorQueryHandler);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Handler_BookCommandHandler);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Handler_BookQueryHandler);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Handler_Exception_DependencyInjectionException);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Handler_Exception_NotFoundException);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Service_CommandQueryBus);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Service_Converter_Author_EntityToDto);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Service_Converter_Book_EntityToDto);
	ZEPHIR_INIT(Dgafka_BookStore_Business_Service_Service_Exception_ClassNotFoundException);
	ZEPHIR_INIT(Dgafka_Test_Test);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(dgafka)
{

	zephir_deinitialize_memory(TSRMLS_C);

	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_dgafka_globals *zephir_globals TSRMLS_DC)
{
	zephir_globals->initialized = 0;

	/* Memory options */
	zephir_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	zephir_globals->active_symbol_table = NULL;

	/* Cache Enabled */
#if PHP_VERSION_ID < 50600
	zephir_globals->cache_enabled = 1;
#else
	zephir_globals->cache_enabled = 0;
#endif

	/* Recursive Lock */
	zephir_globals->recursive_lock = 0;


}

static PHP_RINIT_FUNCTION(dgafka)
{

	zend_dgafka_globals *zephir_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(zephir_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(zephir_globals_ptr TSRMLS_CC);

	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(dgafka)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(dgafka)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_DGAFKA_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_DGAFKA_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_DGAFKA_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_DGAFKA_VERSION);
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_DGAFKA_ZEPVERSION);
	php_info_print_table_end();


}

static PHP_GINIT_FUNCTION(dgafka)
{
	php_zephir_init_globals(dgafka_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(dgafka)
{

}

zend_module_entry dgafka_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_DGAFKA_EXTNAME,
	NULL,
	PHP_MINIT(dgafka),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(dgafka),
#else
	NULL,
#endif
	PHP_RINIT(dgafka),
	PHP_RSHUTDOWN(dgafka),
	PHP_MINFO(dgafka),
	PHP_DGAFKA_VERSION,
	ZEND_MODULE_GLOBALS(dgafka),
	PHP_GINIT(dgafka),
	PHP_GSHUTDOWN(dgafka),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_DGAFKA
ZEND_GET_MODULE(dgafka)
#endif
