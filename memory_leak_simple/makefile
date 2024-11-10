CC = gcc

CFLAGS= -O2 -Wall -Wextra
#CFLAGS = -g -Wall -Wextra

VALGRIND=valgrind
#VALGRIND=valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

HEADERS = $(wildcard *.h)

.PHONY: all clean leak noleak

all: test_leak

clean:
	rm -f test_leak

leak: all
	time $(VALGRIND) ./test_leak

noleak: all
	time $(VALGRIND) ./test_leak noleak

test_leak: leak.c $(HEADERS)
	$(CC) $(CFLAGS) -o $@ leak.c