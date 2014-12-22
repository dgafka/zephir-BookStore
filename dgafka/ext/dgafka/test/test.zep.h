
extern zend_class_entry *dgafka_test_test_ce;

ZEPHIR_INIT_CLASS(Dgafka_Test_Test);

PHP_METHOD(Dgafka_Test_Test, __construct);
PHP_METHOD(Dgafka_Test_Test, run);
PHP_METHOD(Dgafka_Test_Test, guidGenerator);
PHP_METHOD(Dgafka_Test_Test, initialize);

ZEPHIR_INIT_FUNCS(dgafka_test_test_method_entry) {
	PHP_ME(Dgafka_Test_Test, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Dgafka_Test_Test, run, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_Test_Test, guidGenerator, NULL, ZEND_ACC_PRIVATE)
	PHP_ME(Dgafka_Test_Test, initialize, NULL, ZEND_ACC_PRIVATE)
  PHP_FE_END
};
