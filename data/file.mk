CC = gcc
CFLAGS = -Wall -Wextra -g

all: safeadd safesubtract safemultiply safedivide

safeint.o: safeint.c safeint.h
	$(CC) $(CFLAGS) -c safeint.c -o safeint.o


safeadd: safeadd.c safeint.h
	$(CC) $(CFLAGS) safeadd.c safeint.o - safeadd

safesubtract: safesubtract.c safeint.o
	$(CC) $(CFLAGS) safesubtract.c safeint.o -o safesubtract

safemultiply: safemultiply.c safeint.o
	$(CC) $(CFLAGS) safemultiply.c safeint.o -o safemultiply

safedivide: safedivide.c safeint.o
	$(CC) $(CFLAGS) safedivide.c safeint.o -o safedivide

clean:
	rm -f *.o safeadd safesubtract safemultiply safedivide

