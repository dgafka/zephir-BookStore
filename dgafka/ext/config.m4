PHP_ARG_ENABLE(dgafka, whether to enable dgafka, [ --enable-dgafka   Enable Dgafka])

if test "$PHP_DGAFKA" = "yes"; then

	

	if ! test "x" = "x"; then
		PHP_EVAL_LIBLINE(, DGAFKA_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_DGAFKA, 1, [Whether you have Dgafka])
	dgafka_sources="dgafka.c kernel/main.c kernel/memory.c kernel/exception.c kernel/hash.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/extended/array.c kernel/string.c kernel/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/exit.c dgafka/bookstore/application/inmemory/repository/command/authorrepository.zep.c
	dgafka/bookstore/application/inmemory/repository/command/bookrepository.zep.c
	dgafka/bookstore/application/inmemory/repository/query/authorrepository.zep.c
	dgafka/bookstore/application/inmemory/repository/query/bookrepository.zep.c
	dgafka/bookstore/business/model/entity/author.zep.c
	dgafka/bookstore/business/model/entity/book.zep.c
	dgafka/bookstore/business/service/dto/author.zep.c
	dgafka/bookstore/business/service/dto/authorcollection.zep.c
	dgafka/bookstore/business/service/dto/book.zep.c
	dgafka/bookstore/business/service/dto/bookcollection.zep.c
	dgafka/bookstore/business/service/dto/command/author/createcommand.zep.c
	dgafka/bookstore/business/service/dto/command/book/changeauthorcommand.zep.c
	dgafka/bookstore/business/service/dto/command/book/changeinformationcommand.zep.c
	dgafka/bookstore/business/service/dto/command/book/createcommand.zep.c
	dgafka/bookstore/business/service/dto/command/book/removecommand.zep.c
	dgafka/bookstore/business/service/dto/query/author/getbyidquery.zep.c
	dgafka/bookstore/business/service/dto/query/author/getbyquery.zep.c
	dgafka/bookstore/business/service/dto/query/book/getbyidquery.zep.c
	dgafka/bookstore/business/service/dto/query/book/getbyquery.zep.c
	dgafka/bookstore/business/service/factory/author.zep.c
	dgafka/bookstore/business/service/factory/book.zep.c
	dgafka/bookstore/business/service/handler/authorcommandhandler.zep.c
	dgafka/bookstore/business/service/handler/authorqueryhandler.zep.c
	dgafka/bookstore/business/service/handler/bookcommandhandler.zep.c
	dgafka/bookstore/business/service/handler/bookqueryhandler.zep.c
	dgafka/bookstore/business/service/handler/exception/dependencyinjectionexception.zep.c
	dgafka/bookstore/business/service/handler/exception/notfoundexception.zep.c
	dgafka/bookstore/business/service/repository/command/authorrepository.zep.c
	dgafka/bookstore/business/service/repository/command/bookrepository.zep.c
	dgafka/bookstore/business/service/repository/query/authorrepository.zep.c
	dgafka/bookstore/business/service/repository/query/bookrepository.zep.c
	dgafka/bookstore/business/service/service/commandquerybus.zep.c
	dgafka/bookstore/business/service/service/converter/author/entitytodto.zep.c
	dgafka/bookstore/business/service/service/converter/book/entitytodto.zep.c
	dgafka/bookstore/business/service/service/exception/classnotfoundexception.zep.c
	dgafka/test/test.zep.c "
	PHP_NEW_EXTENSION(dgafka, $dgafka_sources, $ext_shared,, )
	PHP_SUBST(DGAFKA_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([dgafka], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([dgafka], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/dgafka], [php_DGAFKA.h])

fi
