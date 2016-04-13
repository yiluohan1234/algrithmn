CC = gcc
CFLAGS = -g

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o FindNumsAppearOnce.o
	$(CC) main.o FindNumsAppearOnce.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
