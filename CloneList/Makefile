CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o CopyCompleList.o ComplexList.o
	$(CC) main.o CopyCompleList.o ComplexList.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
