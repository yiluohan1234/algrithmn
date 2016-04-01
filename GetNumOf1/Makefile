CC = gcc
CFLAGS = -g

%.o:%.c
	$(CC) -o $@ -c $(CFLAGS) $<

main:GetNumOf1.o main.o
	$(CC) GetNumOf1.o main.o -o main $(CFLAGS)

clean:
	rm -rf *.o main
