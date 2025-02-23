all: taskmanager.out

taskmanager.out: taskmanager.c processes.o 
	gcc -c taskmaneger.c processes.o -o taskmanager.out

processes.o: processes.c processes.h
	gcc -c processes.c -o processes.o 

clean:
	-rm -f *.o *.out