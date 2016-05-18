.SUFFIXEX:.c.o

CC = gcc
CFLAGS = -g -O2 -Wall
SRCS = main.c\
	   List.c\
	   mergeList.c
OBJS = $(SRCS:.c=.o)
EXE = main

all:$(OBJS)
	$(CC) $(OBJS) -o $(EXE) $(CFLAGS)

.c.o:
	$(CC) -o $@ -c $(CFLAGS) $<

clean:
	rm -rf $(OBJS) $(EXE)
