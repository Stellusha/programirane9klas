CC = gcc
CFLAGS = -Wall - Wextra - std=c11 - lm

all: main

main: main.o quadraticroots.o
	$(CC) main.o quadraticroots.o -o main $(CFLAGS)

main.o: main.c quadraticroots.h
	$(CC) -c main.c $(CFLAGS)

quadraticroots.o: quadraticroots.c quadraticroots.h
	$(CC) -c quadraticroots.c $(CFLAGS)

clean:
	rm -f *.o main

