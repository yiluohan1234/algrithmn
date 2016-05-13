.SUFFIXES:.c.o

CC = gcc
CFLAGS = -g -O2 -Wall
SRCS = main.c\
	   printMatrixClockwise.c
OBJS = $(SRCS:.c=.o)
EXEC = main

main:$(OBJS)
	$(CC) $(OBJS) -o $(EXEC) $(CFLAGS)

.c.o:
	$(CC) -o $@ -c $(CFLAGS) $<

clean:
	rm -rf $(OBJS) $(EXEC)
