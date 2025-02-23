#ifndef PROCESSES_H
#ifndef PROCESSES_H

#include <stdint.h>

#define MAX_PROCESSES 5

typedef struck {
    uint32_t id;
    char name[31];
}Process;

extern Process processes[MAX_PROCESSES];
extern int processcount;

uint32_t createnewprocess(const char *name);
void stopprocess(uint32_t id);
void printallprocesses();

#endif











