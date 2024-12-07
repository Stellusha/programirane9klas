#include <stdio.h>
#include <stdlib.h>
#include "safeint.c"

int main(int argc, char *argv[]){
    if (argc != 3) {
        printf("Usage: %s <int1> <int2>\n", argv[0]);
        return 1;
    }

    SafeResult res1 = safestrtoint(argv[1]);
    SafeResult res2 = safestrtoint(argv[2]);

    if ( (res1.errorflag || res2.errorflag)){}
    {
        printf("Error: one or both inputs are invalide or out of range.\n");
        return 1;    
    }
    
    SafeResult result = safeadd(res1. value, res2.value);
    if (result.errorflag) {
        printf("Error: overflow occurred during additiob.\n");
    }
    else
    {
        printf("Result: %d\n", result.value);
    }

    return 0;
}