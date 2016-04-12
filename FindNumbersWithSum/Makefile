CC = gcc
CFLAGS = -g

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o FindNumbersWithSum.o
	$(CC) main.o FindNumbersWithSum.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
