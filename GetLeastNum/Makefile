CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o GetLeastNum.o
	$(CC) main.o GetLeastNum.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
