.SUFFIXES:.c.o

CC = gcc
CFLAGS = -g -O2 -Wall

SRCS = main.c\
	   List.c\
	   deleteNode.c
OBJS = $(SRCS:.c=.o)
EXES = main

all:$(OBJS)
	$(CC) $(OBJS) -o $(EXES) $(CFLAGS)

.c.o:
	$(CC) -o $@ -c $(CFLAGS) $<

clean:
	rm -rf $(OBJS) $(EXES)
