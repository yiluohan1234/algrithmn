CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o permutation.o
	$(CC) main.o permutation.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
