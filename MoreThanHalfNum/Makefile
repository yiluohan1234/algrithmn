CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o MoreThanHalfNum.o
	$(CC) main.o MoreThanHalfNum.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
