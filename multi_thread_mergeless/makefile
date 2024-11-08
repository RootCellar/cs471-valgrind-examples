CC = gcc

CFLAGS= -std=c++17
#CFLAGS = -g -Wall -Wextra

VALGRIND=valgrind
#VALGRIND=valgrind -s --leak-check=full --show-leak-kinds=all --track-origins=yes --read-var-info=yes --tool=memcheck

all: test_merge test_mergless merge mergless

clean:
	rm -f test_mergless
	rm -f test_merge

merge: 
	$(VALGRIND) ./test_merge

mergless:
	$(VALGRIND) ./test_mergless

test_mergless:
	$(CC) $(CFLAGS) -o test_mergless mergless.cpp

test_merge:
	$(CC) $(CFLAGS) -o test_merge merge.cpp