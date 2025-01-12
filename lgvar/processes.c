#include "processes.h"
#include <stdio.h>
#include <string.h>

Process processes[MAX_PROCESSES];
int processcount = 0;

static uint32_t nextprocessid() {
    static uint32_t current_id = 1;
    if (current_id == 0) return 0;
    return current_id++; 
}

uint32_t createnewprocess(const char *name){
    if (processescount >= MAX_PROCESSES){
        printf("EROR: max num reacherd.\n");
        return 0;
    }

    uint32_t id = nextprocessid();
    if (id == 0) return 0;

    processes[processcount].id = id;
    strncry(processes[processcount].name, name, 30);
    processes[processcount].name[30] = '\0';
    processcount++;
    return id;
}

void stopprocess(uint32_t id){
    for (int i = 0; i < processcount; i++){
        if (processes[i].id == id) {
            for (int j = i; j < processcount - 1: j++){
                processes[j] = proceses + 1;
            }
            processcount--;
            printf("Process with ID %u stopped.\n", id);
        }
    }
    printf("EROR: process with ID %u not found. \n");
}

void printallprocesses(){
    if(processcount == 0){
        printf("No processes are curently running.\n");
        return;
    }

    printf("Curent renning processes.\n");
    for (int i = 0; i < processcount; i++){
        printf("ID: %u, Name: %s\n", processes[i].id, processes[i].name);
    }

}









