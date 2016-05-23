.SUFFIXES:.c.o

CC = gcc
CFLAGS = -g -O2 -Wall
SRCS = main.c\
	   fib.c
OBJS = $(SRCS:.c=.o)
EXES = main

main:$(OBJS)
	$(CC) $(OBJS) -o $(EXES) $(CFLAGS) 

.c.o:
	$(CC) -o $@ -c $(CFLAGS) $<

clean:
	rm -rf *.o $(EXES)
