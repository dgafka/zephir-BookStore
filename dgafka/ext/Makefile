srcdir = /vagrant_data/BookStore/dgafka/ext
builddir = /vagrant_data/BookStore/dgafka/ext
top_srcdir = /vagrant_data/BookStore/dgafka/ext
top_builddir = /vagrant_data/BookStore/dgafka/ext
EGREP = /bin/grep -E
SED = /bin/sed
CONFIGURE_COMMAND = './configure' '--enable-dgafka'
CONFIGURE_OPTIONS = '--enable-dgafka'
SHLIB_SUFFIX_NAME = so
SHLIB_DL_SUFFIX_NAME = so
ZEND_EXT_TYPE = zend_extension
RE2C = re2c
AWK = nawk
shared_objects_dgafka = dgafka.lo kernel/main.lo kernel/memory.lo kernel/exception.lo kernel/hash.lo kernel/debug.lo kernel/backtrace.lo kernel/object.lo kernel/array.lo kernel/extended/array.lo kernel/string.lo kernel/fcall.lo kernel/require.lo kernel/file.lo kernel/operators.lo kernel/concat.lo kernel/variables.lo kernel/filter.lo kernel/iterator.lo kernel/exit.lo dgafka/bookstore/application/inmemory/repository/command/authorrepository.lo dgafka/bookstore/application/inmemory/repository/command/bookrepository.lo dgafka/bookstore/application/inmemory/repository/query/authorrepository.lo dgafka/bookstore/application/inmemory/repository/query/bookrepository.lo dgafka/bookstore/business/model/entity/author.lo dgafka/bookstore/business/model/entity/book.lo dgafka/bookstore/business/service/dto/author.lo dgafka/bookstore/business/service/dto/authorcollection.lo dgafka/bookstore/business/service/dto/book.lo dgafka/bookstore/business/service/dto/bookcollection.lo dgafka/bookstore/business/service/dto/command/author/createcommand.lo dgafka/bookstore/business/service/dto/command/book/changeauthorcommand.lo dgafka/bookstore/business/service/dto/command/book/changeinformationcommand.lo dgafka/bookstore/business/service/dto/command/book/createcommand.lo dgafka/bookstore/business/service/dto/command/book/removecommand.lo dgafka/bookstore/business/service/dto/query/author/getbyidquery.lo dgafka/bookstore/business/service/dto/query/author/getbyquery.lo dgafka/bookstore/business/service/dto/query/book/getbyidquery.lo dgafka/bookstore/business/service/dto/query/book/getbyquery.lo dgafka/bookstore/business/service/factory/author.lo dgafka/bookstore/business/service/factory/book.lo dgafka/bookstore/business/service/handler/authorcommandhandler.lo dgafka/bookstore/business/service/handler/authorqueryhandler.lo dgafka/bookstore/business/service/handler/bookcommandhandler.lo dgafka/bookstore/business/service/handler/bookqueryhandler.lo dgafka/bookstore/business/service/handler/exception/dependencyinjectionexception.lo dgafka/bookstore/business/service/handler/exception/notfoundexception.lo dgafka/bookstore/business/service/repository/command/authorrepository.lo dgafka/bookstore/business/service/repository/command/bookrepository.lo dgafka/bookstore/business/service/repository/query/authorrepository.lo dgafka/bookstore/business/service/repository/query/bookrepository.lo dgafka/bookstore/business/service/service/commandquerybus.lo dgafka/bookstore/business/service/service/converter/author/entitytodto.lo dgafka/bookstore/business/service/service/converter/book/entitytodto.lo dgafka/bookstore/business/service/service/exception/classnotfoundexception.lo dgafka/test/test.lo
PHP_PECL_EXTENSION = dgafka
DGAFKA_SHARED_LIBADD =
PHP_MODULES = $(phplibdir)/dgafka.la
PHP_ZEND_EX =
all_targets = $(PHP_MODULES) $(PHP_ZEND_EX)
install_targets = install-modules install-headers
prefix = /usr
exec_prefix = $(prefix)
libdir = ${exec_prefix}/lib
prefix = /usr
phplibdir = /vagrant_data/BookStore/dgafka/ext/modules
phpincludedir = /usr/include/php5
CC = gcc
CFLAGS = -O2 -fvisibility=hidden -Wparentheses -flto -DZEPHIR_RELEASE=1
CFLAGS_CLEAN = $(CFLAGS)
CPP = gcc -E
CPPFLAGS = -DHAVE_CONFIG_H
CXX =
CXXFLAGS =
CXXFLAGS_CLEAN = $(CXXFLAGS)
EXTENSION_DIR = /usr/lib/php5/20100525
PHP_EXECUTABLE = /usr/bin/php
EXTRA_LDFLAGS =
EXTRA_LIBS =
INCLUDES = -I/usr/include/php5 -I/usr/include/php5/main -I/usr/include/php5/TSRM -I/usr/include/php5/Zend -I/usr/include/php5/ext -I/usr/include/php5/ext/date/lib
LFLAGS =
LDFLAGS =
SHARED_LIBTOOL =
LIBTOOL = $(SHELL) $(top_builddir)/libtool
SHELL = /bin/bash
INSTALL_HEADERS = ext/dgafka/php_DGAFKA.h
mkinstalldirs = $(top_srcdir)/build/shtool mkdir -p
INSTALL = $(top_srcdir)/build/shtool install -c
INSTALL_DATA = $(INSTALL) -m 644

DEFS = -DPHP_ATOM_INC -I$(top_builddir)/include -I$(top_builddir)/main -I$(top_srcdir)
COMMON_FLAGS = $(DEFS) $(INCLUDES) $(EXTRA_INCLUDES) $(CPPFLAGS) $(PHP_FRAMEWORKPATH)

all: $(all_targets) 
	@echo
	@echo "Build complete."
	@echo "Don't forget to run 'make test'."
	@echo

build-modules: $(PHP_MODULES) $(PHP_ZEND_EX)

build-binaries: $(PHP_BINARIES)

libphp$(PHP_MAJOR_VERSION).la: $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS)
	$(LIBTOOL) --mode=link $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -rpath $(phptempdir) $(EXTRA_LDFLAGS) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $@
	-@$(LIBTOOL) --silent --mode=install cp $@ $(phptempdir)/$@ >/dev/null 2>&1

libs/libphp$(PHP_MAJOR_VERSION).bundle: $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS)
	$(CC) $(MH_BUNDLE_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(LDFLAGS) $(EXTRA_LDFLAGS) $(PHP_GLOBAL_OBJS:.lo=.o) $(PHP_SAPI_OBJS:.lo=.o) $(PHP_FRAMEWORKS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $@ && cp $@ libs/libphp$(PHP_MAJOR_VERSION).so

install: $(all_targets) $(install_targets)

install-sapi: $(OVERALL_TARGET)
	@echo "Installing PHP SAPI module:       $(PHP_SAPI)"
	-@$(mkinstalldirs) $(INSTALL_ROOT)$(bindir)
	-@if test ! -r $(phptempdir)/libphp$(PHP_MAJOR_VERSION).$(SHLIB_DL_SUFFIX_NAME); then \
		for i in 0.0.0 0.0 0; do \
			if test -r $(phptempdir)/libphp$(PHP_MAJOR_VERSION).$(SHLIB_DL_SUFFIX_NAME).$$i; then \
				$(LN_S) $(phptempdir)/libphp$(PHP_MAJOR_VERSION).$(SHLIB_DL_SUFFIX_NAME).$$i $(phptempdir)/libphp$(PHP_MAJOR_VERSION).$(SHLIB_DL_SUFFIX_NAME); \
				break; \
			fi; \
		done; \
	fi
	@$(INSTALL_IT)

install-binaries: build-binaries $(install_binary_targets)

install-modules: build-modules
	@test -d modules && \
	$(mkinstalldirs) $(INSTALL_ROOT)$(EXTENSION_DIR)
	@echo "Installing shared extensions:     $(INSTALL_ROOT)$(EXTENSION_DIR)/"
	@rm -f modules/*.la >/dev/null 2>&1
	@$(INSTALL) modules/* $(INSTALL_ROOT)$(EXTENSION_DIR)

install-headers:
	-@if test "$(INSTALL_HEADERS)"; then \
		for i in `echo $(INSTALL_HEADERS)`; do \
			i=`$(top_srcdir)/build/shtool path -d $$i`; \
			paths="$$paths $(INSTALL_ROOT)$(phpincludedir)/$$i"; \
		done; \
		$(mkinstalldirs) $$paths && \
		echo "Installing header files:          $(INSTALL_ROOT)$(phpincludedir)/" && \
		for i in `echo $(INSTALL_HEADERS)`; do \
			if test "$(PHP_PECL_EXTENSION)"; then \
				src=`echo $$i | $(SED) -e "s#ext/$(PHP_PECL_EXTENSION)/##g"`; \
			else \
				src=$$i; \
			fi; \
			if test -f "$(top_srcdir)/$$src"; then \
				$(INSTALL_DATA) $(top_srcdir)/$$src $(INSTALL_ROOT)$(phpincludedir)/$$i; \
			elif test -f "$(top_builddir)/$$src"; then \
				$(INSTALL_DATA) $(top_builddir)/$$src $(INSTALL_ROOT)$(phpincludedir)/$$i; \
			else \
				(cd $(top_srcdir)/$$src && $(INSTALL_DATA) *.h $(INSTALL_ROOT)$(phpincludedir)/$$i; \
				cd $(top_builddir)/$$src && $(INSTALL_DATA) *.h $(INSTALL_ROOT)$(phpincludedir)/$$i) 2>/dev/null || true; \
			fi \
		done; \
	fi

PHP_TEST_SETTINGS = -d 'open_basedir=' -d 'output_buffering=0' -d 'memory_limit=-1'
PHP_TEST_SHARED_EXTENSIONS =  ` \
	if test "x$(PHP_MODULES)" != "x"; then \
		for i in $(PHP_MODULES)""; do \
			. $$i; $(top_srcdir)/build/shtool echo -n -- " -d extension=$$dlname"; \
		done; \
	fi; \
	if test "x$(PHP_ZEND_EX)" != "x"; then \
		for i in $(PHP_ZEND_EX)""; do \
			. $$i; $(top_srcdir)/build/shtool echo -n -- " -d $(ZEND_EXT_TYPE)=$(top_builddir)/modules/$$dlname"; \
		done; \
	fi`
PHP_DEPRECATED_DIRECTIVES_REGEX = '^(magic_quotes_(gpc|runtime|sybase)?|(zend_)?extension(_debug)?(_ts)?)[\t\ ]*='

test: all
	-@if test ! -z "$(PHP_EXECUTABLE)" && test -x "$(PHP_EXECUTABLE)"; then \
		INI_FILE=`$(PHP_EXECUTABLE) -d 'display_errors=stderr' -r 'echo php_ini_loaded_file();' 2> /dev/null`; \
		if test "$$INI_FILE"; then \
			$(EGREP) -h -v $(PHP_DEPRECATED_DIRECTIVES_REGEX) "$$INI_FILE" > $(top_builddir)/tmp-php.ini; \
		else \
			echo > $(top_builddir)/tmp-php.ini; \
		fi; \
		INI_SCANNED_PATH=`$(PHP_EXECUTABLE) -d 'display_errors=stderr' -r '$$a = explode(",\n", trim(php_ini_scanned_files())); echo $$a[0];' 2> /dev/null`; \
		if test "$$INI_SCANNED_PATH"; then \
			INI_SCANNED_PATH=`$(top_srcdir)/build/shtool path -d $$INI_SCANNED_PATH`; \
			$(EGREP) -h -v $(PHP_DEPRECATED_DIRECTIVES_REGEX) "$$INI_SCANNED_PATH"/*.ini >> $(top_builddir)/tmp-php.ini; \
		fi; \
		TEST_PHP_EXECUTABLE=$(PHP_EXECUTABLE) \
		TEST_PHP_SRCDIR=$(top_srcdir) \
		CC="$(CC)" \
			$(PHP_EXECUTABLE) -n -c $(top_builddir)/tmp-php.ini $(PHP_TEST_SETTINGS) $(top_srcdir)/run-tests.php -n -c $(top_builddir)/tmp-php.ini -d extension_dir=$(top_builddir)/modules/ $(PHP_TEST_SHARED_EXTENSIONS) $(TESTS); \
		rm $(top_builddir)/tmp-php.ini; \
	else \
		echo "ERROR: Cannot run tests without CLI sapi."; \
	fi

clean:
	find . -name \*.gcno -o -name \*.gcda | xargs rm -f
	find . -name \*.lo -o -name \*.o | xargs rm -f
	find . -name \*.la -o -name \*.a | xargs rm -f 
	find . -name \*.so | xargs rm -f
	find . -name .libs -a -type d|xargs rm -rf
	find . -name \*.1 | xargs rm -f
	rm -f libphp$(PHP_MAJOR_VERSION).la $(SAPI_CLI_PATH) $(OVERALL_TARGET) modules/* libs/*

distclean: clean
	rm -f Makefile config.cache config.log config.status Makefile.objects Makefile.fragments libtool main/php_config.h stamp-h sapi/apache/libphp$(PHP_MAJOR_VERSION).module buildmk.stamp Zend/zend_dtrace_gen.h Zend/zend_dtrace_gen.h.bak
	$(EGREP) define'.*include/php' $(top_srcdir)/configure | $(SED) 's/.*>//'|xargs rm -f

.PHONY: all clean install distclean test
.NOEXPORT:
dgafka.lo: /vagrant_data/BookStore/dgafka/ext/dgafka.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka.c -o dgafka.lo 
kernel/main.lo: /vagrant_data/BookStore/dgafka/ext/kernel/main.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/main.c -o kernel/main.lo 
kernel/memory.lo: /vagrant_data/BookStore/dgafka/ext/kernel/memory.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/memory.c -o kernel/memory.lo 
kernel/exception.lo: /vagrant_data/BookStore/dgafka/ext/kernel/exception.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/exception.c -o kernel/exception.lo 
kernel/hash.lo: /vagrant_data/BookStore/dgafka/ext/kernel/hash.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/hash.c -o kernel/hash.lo 
kernel/debug.lo: /vagrant_data/BookStore/dgafka/ext/kernel/debug.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/debug.c -o kernel/debug.lo 
kernel/backtrace.lo: /vagrant_data/BookStore/dgafka/ext/kernel/backtrace.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/backtrace.c -o kernel/backtrace.lo 
kernel/object.lo: /vagrant_data/BookStore/dgafka/ext/kernel/object.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/object.c -o kernel/object.lo 
kernel/array.lo: /vagrant_data/BookStore/dgafka/ext/kernel/array.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/array.c -o kernel/array.lo 
kernel/extended/array.lo: /vagrant_data/BookStore/dgafka/ext/kernel/extended/array.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/extended/array.c -o kernel/extended/array.lo 
kernel/string.lo: /vagrant_data/BookStore/dgafka/ext/kernel/string.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/string.c -o kernel/string.lo 
kernel/fcall.lo: /vagrant_data/BookStore/dgafka/ext/kernel/fcall.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/fcall.c -o kernel/fcall.lo 
kernel/require.lo: /vagrant_data/BookStore/dgafka/ext/kernel/require.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/require.c -o kernel/require.lo 
kernel/file.lo: /vagrant_data/BookStore/dgafka/ext/kernel/file.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/file.c -o kernel/file.lo 
kernel/operators.lo: /vagrant_data/BookStore/dgafka/ext/kernel/operators.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/operators.c -o kernel/operators.lo 
kernel/concat.lo: /vagrant_data/BookStore/dgafka/ext/kernel/concat.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/concat.c -o kernel/concat.lo 
kernel/variables.lo: /vagrant_data/BookStore/dgafka/ext/kernel/variables.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/variables.c -o kernel/variables.lo 
kernel/filter.lo: /vagrant_data/BookStore/dgafka/ext/kernel/filter.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/filter.c -o kernel/filter.lo 
kernel/iterator.lo: /vagrant_data/BookStore/dgafka/ext/kernel/iterator.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/iterator.c -o kernel/iterator.lo 
kernel/exit.lo: /vagrant_data/BookStore/dgafka/ext/kernel/exit.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/kernel/exit.c -o kernel/exit.lo 
dgafka/bookstore/application/inmemory/repository/command/authorrepository.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/application/inmemory/repository/command/authorrepository.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/application/inmemory/repository/command/authorrepository.zep.c -o dgafka/bookstore/application/inmemory/repository/command/authorrepository.lo 
dgafka/bookstore/application/inmemory/repository/command/bookrepository.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/application/inmemory/repository/command/bookrepository.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/application/inmemory/repository/command/bookrepository.zep.c -o dgafka/bookstore/application/inmemory/repository/command/bookrepository.lo 
dgafka/bookstore/application/inmemory/repository/query/authorrepository.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/application/inmemory/repository/query/authorrepository.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/application/inmemory/repository/query/authorrepository.zep.c -o dgafka/bookstore/application/inmemory/repository/query/authorrepository.lo 
dgafka/bookstore/application/inmemory/repository/query/bookrepository.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/application/inmemory/repository/query/bookrepository.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/application/inmemory/repository/query/bookrepository.zep.c -o dgafka/bookstore/application/inmemory/repository/query/bookrepository.lo 
dgafka/bookstore/business/model/entity/author.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/model/entity/author.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/model/entity/author.zep.c -o dgafka/bookstore/business/model/entity/author.lo 
dgafka/bookstore/business/model/entity/book.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/model/entity/book.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/model/entity/book.zep.c -o dgafka/bookstore/business/model/entity/book.lo 
dgafka/bookstore/business/service/dto/author.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/author.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/author.zep.c -o dgafka/bookstore/business/service/dto/author.lo 
dgafka/bookstore/business/service/dto/authorcollection.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/authorcollection.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/authorcollection.zep.c -o dgafka/bookstore/business/service/dto/authorcollection.lo 
dgafka/bookstore/business/service/dto/book.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/book.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/book.zep.c -o dgafka/bookstore/business/service/dto/book.lo 
dgafka/bookstore/business/service/dto/bookcollection.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/bookcollection.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/bookcollection.zep.c -o dgafka/bookstore/business/service/dto/bookcollection.lo 
dgafka/bookstore/business/service/dto/command/author/createcommand.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/author/createcommand.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/author/createcommand.zep.c -o dgafka/bookstore/business/service/dto/command/author/createcommand.lo 
dgafka/bookstore/business/service/dto/command/book/changeauthorcommand.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/book/changeauthorcommand.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/book/changeauthorcommand.zep.c -o dgafka/bookstore/business/service/dto/command/book/changeauthorcommand.lo 
dgafka/bookstore/business/service/dto/command/book/changeinformationcommand.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/book/changeinformationcommand.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/book/changeinformationcommand.zep.c -o dgafka/bookstore/business/service/dto/command/book/changeinformationcommand.lo 
dgafka/bookstore/business/service/dto/command/book/createcommand.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/book/createcommand.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/book/createcommand.zep.c -o dgafka/bookstore/business/service/dto/command/book/createcommand.lo 
dgafka/bookstore/business/service/dto/command/book/removecommand.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/book/removecommand.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/command/book/removecommand.zep.c -o dgafka/bookstore/business/service/dto/command/book/removecommand.lo 
dgafka/bookstore/business/service/dto/query/author/getbyidquery.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/query/author/getbyidquery.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/query/author/getbyidquery.zep.c -o dgafka/bookstore/business/service/dto/query/author/getbyidquery.lo 
dgafka/bookstore/business/service/dto/query/author/getbyquery.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/query/author/getbyquery.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/query/author/getbyquery.zep.c -o dgafka/bookstore/business/service/dto/query/author/getbyquery.lo 
dgafka/bookstore/business/service/dto/query/book/getbyidquery.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/query/book/getbyidquery.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/query/book/getbyidquery.zep.c -o dgafka/bookstore/business/service/dto/query/book/getbyidquery.lo 
dgafka/bookstore/business/service/dto/query/book/getbyquery.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/query/book/getbyquery.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/dto/query/book/getbyquery.zep.c -o dgafka/bookstore/business/service/dto/query/book/getbyquery.lo 
dgafka/bookstore/business/service/factory/author.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/factory/author.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/factory/author.zep.c -o dgafka/bookstore/business/service/factory/author.lo 
dgafka/bookstore/business/service/factory/book.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/factory/book.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/factory/book.zep.c -o dgafka/bookstore/business/service/factory/book.lo 
dgafka/bookstore/business/service/handler/authorcommandhandler.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/authorcommandhandler.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/authorcommandhandler.zep.c -o dgafka/bookstore/business/service/handler/authorcommandhandler.lo 
dgafka/bookstore/business/service/handler/authorqueryhandler.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/authorqueryhandler.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/authorqueryhandler.zep.c -o dgafka/bookstore/business/service/handler/authorqueryhandler.lo 
dgafka/bookstore/business/service/handler/bookcommandhandler.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/bookcommandhandler.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/bookcommandhandler.zep.c -o dgafka/bookstore/business/service/handler/bookcommandhandler.lo 
dgafka/bookstore/business/service/handler/bookqueryhandler.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/bookqueryhandler.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/bookqueryhandler.zep.c -o dgafka/bookstore/business/service/handler/bookqueryhandler.lo 
dgafka/bookstore/business/service/handler/exception/dependencyinjectionexception.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/exception/dependencyinjectionexception.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/exception/dependencyinjectionexception.zep.c -o dgafka/bookstore/business/service/handler/exception/dependencyinjectionexception.lo 
dgafka/bookstore/business/service/handler/exception/notfoundexception.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/exception/notfoundexception.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/handler/exception/notfoundexception.zep.c -o dgafka/bookstore/business/service/handler/exception/notfoundexception.lo 
dgafka/bookstore/business/service/repository/command/authorrepository.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/repository/command/authorrepository.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/repository/command/authorrepository.zep.c -o dgafka/bookstore/business/service/repository/command/authorrepository.lo 
dgafka/bookstore/business/service/repository/command/bookrepository.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/repository/command/bookrepository.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/repository/command/bookrepository.zep.c -o dgafka/bookstore/business/service/repository/command/bookrepository.lo 
dgafka/bookstore/business/service/repository/query/authorrepository.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/repository/query/authorrepository.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/repository/query/authorrepository.zep.c -o dgafka/bookstore/business/service/repository/query/authorrepository.lo 
dgafka/bookstore/business/service/repository/query/bookrepository.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/repository/query/bookrepository.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/repository/query/bookrepository.zep.c -o dgafka/bookstore/business/service/repository/query/bookrepository.lo 
dgafka/bookstore/business/service/service/commandquerybus.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/service/commandquerybus.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/service/commandquerybus.zep.c -o dgafka/bookstore/business/service/service/commandquerybus.lo 
dgafka/bookstore/business/service/service/converter/author/entitytodto.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/service/converter/author/entitytodto.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/service/converter/author/entitytodto.zep.c -o dgafka/bookstore/business/service/service/converter/author/entitytodto.lo 
dgafka/bookstore/business/service/service/converter/book/entitytodto.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/service/converter/book/entitytodto.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/service/converter/book/entitytodto.zep.c -o dgafka/bookstore/business/service/service/converter/book/entitytodto.lo 
dgafka/bookstore/business/service/service/exception/classnotfoundexception.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/service/exception/classnotfoundexception.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/bookstore/business/service/service/exception/classnotfoundexception.zep.c -o dgafka/bookstore/business/service/service/exception/classnotfoundexception.lo 
dgafka/test/test.lo: /vagrant_data/BookStore/dgafka/ext/dgafka/test/test.zep.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/vagrant_data/BookStore/dgafka/ext $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /vagrant_data/BookStore/dgafka/ext/dgafka/test/test.zep.c -o dgafka/test/test.lo 
$(phplibdir)/dgafka.la: ./dgafka.la
	$(LIBTOOL) --mode=install cp ./dgafka.la $(phplibdir)

./dgafka.la: $(shared_objects_dgafka) $(DGAFKA_SHARED_DEPENDENCIES)
	$(LIBTOOL) --mode=link $(CC) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(LDFLAGS) -o $@ -export-dynamic -avoid-version -prefer-pic -module -rpath $(phplibdir) $(EXTRA_LDFLAGS) $(shared_objects_dgafka) $(DGAFKA_SHARED_LIBADD)

