CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o FirstNotRepeatingChar.o
	$(CC) main.o FirstNotRepeatingChar.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
