CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o Convert.o BinaryTree.o
	$(CC) main.o Convert.o BinaryTree.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
