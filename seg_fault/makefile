CC = gcc
CFLAGS = -g3 -Wall -Wextra
VALGRIND=valgrind -s --leak-check=full --show-leak-kinds=all --track-origins=yes --read-var-info=yes --tool=memcheck
HEADERS = $(wildcard *.h)

PRG_NAME=fault

.PHONY: all clean $(PRG_NAME)

all: test_$(PRG_NAME)

clean:
	rm -f test_$(PRG_NAME)

$(PRG_NAME): all
	time $(VALGRIND) ./test_$(PRG_NAME)

test_$(PRG_NAME): $(PRG_NAME).c $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $(PRG_NAME).c