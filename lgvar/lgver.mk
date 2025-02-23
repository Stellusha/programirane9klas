CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = taskmanager
OBJS = process.o taskmanager.o

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(FLAGS) -o $@ $^

taskmanager.o: taskmanager.c processes.h
	$(CC) $(CFLAGS) -c taskmanager.c 

processes.o: processes.c processes.h
	$(CC) $(FLAGS) -c processes.c

clean:
	rm -f $(OBJS) $(TARGET)
	