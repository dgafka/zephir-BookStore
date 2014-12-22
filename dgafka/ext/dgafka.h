
/* This file was generated automatically by Zephir do not modify it! */

#ifndef ZEPHIR_CLASS_ENTRIES_H
#define ZEPHIR_CLASS_ENTRIES_H

#include "dgafka/bookstore/application/inmemory/repository/command/authorrepository.zep.h"
#include "dgafka/bookstore/application/inmemory/repository/command/bookrepository.zep.h"
#include "dgafka/bookstore/application/inmemory/repository/query/authorrepository.zep.h"
#include "dgafka/bookstore/application/inmemory/repository/query/bookrepository.zep.h"
#include "dgafka/bookstore/business/model/entity/author.zep.h"
#include "dgafka/bookstore/business/model/entity/book.zep.h"
#include "dgafka/bookstore/business/service/dto/author.zep.h"
#include "dgafka/bookstore/business/service/dto/authorcollection.zep.h"
#include "dgafka/bookstore/business/service/dto/book.zep.h"
#include "dgafka/bookstore/business/service/dto/bookcollection.zep.h"
#include "dgafka/bookstore/business/service/dto/command/author/createcommand.zep.h"
#include "dgafka/bookstore/business/service/dto/command/book/changeauthorcommand.zep.h"
#include "dgafka/bookstore/business/service/dto/command/book/changeinformationcommand.zep.h"
#include "dgafka/bookstore/business/service/dto/command/book/createcommand.zep.h"
#include "dgafka/bookstore/business/service/dto/command/book/removecommand.zep.h"
#include "dgafka/bookstore/business/service/dto/query/author/getbyidquery.zep.h"
#include "dgafka/bookstore/business/service/dto/query/author/getbyquery.zep.h"
#include "dgafka/bookstore/business/service/dto/query/book/getbyidquery.zep.h"
#include "dgafka/bookstore/business/service/dto/query/book/getbyquery.zep.h"
#include "dgafka/bookstore/business/service/factory/author.zep.h"
#include "dgafka/bookstore/business/service/factory/book.zep.h"
#include "dgafka/bookstore/business/service/handler/authorcommandhandler.zep.h"
#include "dgafka/bookstore/business/service/handler/authorqueryhandler.zep.h"
#include "dgafka/bookstore/business/service/handler/bookcommandhandler.zep.h"
#include "dgafka/bookstore/business/service/handler/bookqueryhandler.zep.h"
#include "dgafka/bookstore/business/service/handler/exception/dependencyinjectionexception.zep.h"
#include "dgafka/bookstore/business/service/handler/exception/notfoundexception.zep.h"
#include "dgafka/bookstore/business/service/repository/command/authorrepository.zep.h"
#include "dgafka/bookstore/business/service/repository/command/bookrepository.zep.h"
#include "dgafka/bookstore/business/service/repository/query/authorrepository.zep.h"
#include "dgafka/bookstore/business/service/repository/query/bookrepository.zep.h"
#include "dgafka/bookstore/business/service/service/commandquerybus.zep.h"
#include "dgafka/bookstore/business/service/service/converter/author/entitytodto.zep.h"
#include "dgafka/bookstore/business/service/service/converter/book/entitytodto.zep.h"
#include "dgafka/bookstore/business/service/service/exception/classnotfoundexception.zep.h"
#include "dgafka/test/test.zep.h"

#endif