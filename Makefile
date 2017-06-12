all: bin/deposit-calc

bin/deposit-calc:  build/src/deposit.o build/src/main.o
	gcc -I src -Wall -Werror build/src/main.o build/src/deposit.o -o bin/deposit-calc

build/src/deposit.o: src/deposit.c
	gcc -I src -Wall -Werror -c src/deposit.c -o build/src/deposit.o

build/src/main.o: src/main.c src/deposit.h
	gcc -I src -Wall -Werror -c src/main.c -o build/src/main.o

bin/deposit-calc-test: build/src/deposit.o build/test/deposit_test.o build/test/main.o build/test/validation_test.o
	gcc -Wall -Werror build/src/deposit.o build/test/deposit_test.o build/test/main.o build/test/validation_test.o -o bin/deposit-calc-test
	bin/deposit-calc-test

build/test/deposit_test.o: test/deposit_test.c
	gcc -I src -I thirdparty -Wall -Werror -c test/deposit_test.c -o build/test/deposit_test.o

build/test/main.o: test/main.c
	gcc -I thirdparty -Wall -Werror -c test/main.c -o build/test/main.o

build/test/validation_test.o: test/validation_test.c
	gcc -I src -I thirdparty -Wall -Werror -c test/validation_test.c -o build/test/validation_test.o

.PHONY: clean test

test: bin/deposit-calc-test

clean:
	rm -rf build/test/*.o build/src/*.o bin/deposit-calc bin/deposit-calc-test