CC = gcc
CFLAGS = -g -lm

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o PrintProbability.o
	$(CC) main.o PrintProbability.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
