# CC = gcc
# CFLAGS = -Wall - Wextra - std=c11 - lm

# all: main

# main: main.o quadraticroots.o
# 	$(CC) main.o quadraticroots.o -o main $(CFLAGS)

# main.o: main.c quadraticroots.h
# 	$(CC) -c main.c $(CFLAGS)

# quadraticroots.o: quadraticroots.c quadraticroots.h
# 	$(CC) -c quadraticroots.c $(CFLAGS)

# clean:
# 	rm -f *.o main

all: main.out

main.out: main.o quadraticroots.o 
	gcc -c main.c quadraticroots.o -o main.out

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c 

clean:
	rm -f *.o main 
