CC = gcc
CFLAGS = -Wall -g

all: help.out strlenght.out strconcat.out strcompare.out

help.out: help.c
	$(CC) $(CFLAGS) -o help.out help.c

mystrings.o: mystrings.c mystrings.h
	$(CC) $(CFLAGS) -c mystrings.c -o mystrings.o

strlenght.out: strlenght.c mystrings.o 
	$(CC) $(CFLAGS) -o strlenght.c strlenght.c mystrings.o 
strconcat.out: strconcat.c mystrings.o
	$(CC) $(CFLAGS) -o strconcat.c strconcat.c mystrings.o 
strcompare.out: strcompare.c mystrings.o
	$(CC) $(CFLAGS) -o strcompare.c strcompare.c mystrings.o 



