CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o InversePairs.o
	$(CC) main.o InversePairs.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
