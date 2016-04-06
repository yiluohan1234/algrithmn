CC = gcc
CFLAGS = -g

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o continusCards.o
	$(CC) main.o continusCards.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
