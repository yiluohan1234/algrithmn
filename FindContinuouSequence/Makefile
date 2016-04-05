CC = gcc
CFLAGS = -g

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o FindContinuousSequence.o
	$(CC) main.o FindContinuousSequence.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
