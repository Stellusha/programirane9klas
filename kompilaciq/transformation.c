#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "transformation.h"

transformation string_to_int(const char *input) {
    transformation result;
    result.result = 0;
    strcpy(result.error, "\0");

    if (input == NULL || strlen(input) == 0) {
        strcpy(result.error, "Empty input string");
        return result;
    }

    char *endptr;
    result.result = strtol(input, &endptr, 10);

    if (*endptr != '\0') {
        result.result = 0; 
        strcpy(result.error, "Invalid input string");
    }

    return result;
}
