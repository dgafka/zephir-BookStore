
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_DGAFKA_H
#define PHP_DGAFKA_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_DGAFKA_NAME        "dgafka"
#define PHP_DGAFKA_VERSION     "0.5.0"
#define PHP_DGAFKA_EXTNAME     "dgafka"
#define PHP_DGAFKA_AUTHOR      "Dariusz Gafka"
#define PHP_DGAFKA_ZEPVERSION  "0.5.9a"
#define PHP_DGAFKA_DESCRIPTION "Domain driven + command pattern based application written in zephir."



ZEND_BEGIN_MODULE_GLOBALS(dgafka)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(dgafka)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(dgafka)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(dgafka_globals_id, zend_dgafka_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (dgafka_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_dgafka_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(dgafka_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(dgafka_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def dgafka_globals
#define zend_zephir_globals_def zend_dgafka_globals

extern zend_module_entry dgafka_module_entry;
#define phpext_dgafka_ptr &dgafka_module_entry

#endif
