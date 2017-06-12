all: bin/deposit-calc bin/deposit-calc-test

.RHONY: all clean test

build/src/main.o: src/main.c src/deposit.h
	gcc -Wall -Werror -c src/main.c -o build/src/main.o 

build/src/deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

bin/deposit-calc: build/src/main.o build/src/deposit.o
	gcc build/src/main.o build/src/deposit.o -o bin/deposit-calc

build/test/main.o: test/main.c thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/main.c -o build/test/main.o

build/test/deposit_test.o: test/deposit_test.c thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/deposit_test.c -o build/test/deposit_test.o

build/test/validation_test.o: test/validation_test.c thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/validation_test.c -o build/test/validation_test.o

bin/deposit-calc-test: build/test/deposit_test.o build/test/main.o build/test/validation_test.o
	gcc build/src/deposit.o build/test/deposit_test.o build/test/main.o build/test/validation_test.o -o bin/deposit-calc-test

clean:
	rm -rf build/src/*.o build/test/*.o bin/* bin/*.*