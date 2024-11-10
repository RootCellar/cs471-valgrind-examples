CC = gcc

CFLAGS = -g -Wall -Wextra

VALGRIND=valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

HEADERS = $(wildcard *.h)

PRG_NAME=test_overflow

.PHONY: all clean $(PRG_NAME)

all: $(PRG_NAME)

clean:
	rm -f $(PRG_NAME)

overflow: all
	time $(VALGRIND) ./$(PRG_NAME) overflow

underflow: all
	time $(VALGRIND) ./$(PRG_NAME) overflow underflow

safe: all
	time $(VALGRIND) ./$(PRG_NAME)

$(PRG_NAME): $(PRG_NAME).c $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $(PRG_NAME).c