
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


ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Query_Book_GetAll) {

	ZEPHIR_REGISTER_CLASS(Dgafka\\BookStore\\Business\\Service\\Dto\\Query\\Book, GetAll, dgafka, bookstore_business_service_dto_query_book_getall, NULL, 0);

	return SUCCESS;

}

