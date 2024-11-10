CC = g++

CFLAGS= -g -std=c++17
#CFLAGS = -g -std=c++17

VALGRIND=valgrind --tool=helgrind
#VALGRIND=valgrind --tool=helgrind

all: test_deadlock deadlock

clean:
	rm -f test_deadlock

deadlock: 
	$(VALGRIND) ./test_deadlock

test_deadlock:
	$(CC) $(CFLAGS) -o test_deadlock deadlock.cpp