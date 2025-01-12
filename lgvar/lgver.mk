CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = tasskmanager
OBJS = process.o tasskmanager.o

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(FLAGS) -o $@ $^

processes.o: processes.c processes.h
	$(CC) $(FLAGS) -c processes.c

taskmanager.o: taskmanager.c processes.h
	$(CC) $(CFLAGS) -c taskmanager.c 

clean:
	rm -f $(OBJS) $(TARGET)
	