CC = gcc
CFLAGS = -g -O2 -Wall

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:main.o FindGreateNumOfSubArray.o
	$(CC) main.o FindGreateNumOfSubArray.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
