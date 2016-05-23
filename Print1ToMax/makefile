.SUFFIXES:.c.o

CC = gcc
CFLAGS = -g -Wall -O2

SRCS = main.c\
	   print1ToMax.c
OBJS = $(SRCS:.c=.o)

EXE = main
all:$(OBJS)
	$(CC) $(OBJS) -o $(EXE) $(CFLAGS)

.c.o:
	$(CC) -o $@ -c $(CFLAGS) $<

clean:
	rm -rf *.o $(EXE)
