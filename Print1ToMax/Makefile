.PHONY:clean all

CC = gcc
CFLAGS = -g -O2 -Wall

BIN = main

all:$(BIN)
%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<
clean:
	rm -rf *.o $(BIN)

