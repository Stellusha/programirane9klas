#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#define ERROR_LENGTH 100

typedef struct {
    long result;
    char error[ERROR_LENGTH];
} transformation;

transformation string_to_int(const char *input);

#endif 
