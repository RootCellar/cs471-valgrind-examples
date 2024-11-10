CC = g++
CFLAGS = -g -Wall -Wextra -std=c++17

VALGRIND=valgrind

all: test_merge test_mergless merge mergless

clean:
	rm -f test_mergless
	rm -f test_merge

merge: test_merge
	$(VALGRIND) ./test_merge

mergeless: test_mergeless
	$(VALGRIND) ./test_mergeless

test_mergeless:
	$(CC) $(CFLAGS) -o test_mergeless mergeless.cpp

test_merge:
	$(CC) $(CFLAGS) -o test_merge merge.cpp