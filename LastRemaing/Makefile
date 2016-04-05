CC = gcc
CFLAGS = -g

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o LastRemaing.o
	$(CC) main.o LastRemaing.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
