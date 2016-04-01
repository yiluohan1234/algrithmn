CC = gcc 
CFLAGS = -g

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o GetNumOfKey.o
	$(CC) main.o GetNumOfKey.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
