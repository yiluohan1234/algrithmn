CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o PrintMinNumber.o
	$(CC) main.o PrintMinNumber.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
