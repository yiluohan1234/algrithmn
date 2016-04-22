CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFAGS) $<

main:main.o NumberOf1Between1AndN.o
	$(CC) main.o NumberOf1Between1AndN.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
