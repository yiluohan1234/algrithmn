CC = gcc
CFLAGS = -g

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o reverse.o
	$(CC) main.o reverse.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
