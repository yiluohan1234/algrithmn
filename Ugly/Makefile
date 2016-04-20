CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o IsUgly.o
	$(CC) main.o IsUgly.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
