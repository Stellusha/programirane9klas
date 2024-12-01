#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if(argc != 3) {
        printf("Usage: ./strcompare.out <string1> <string2>\n");
        return 1;
    }
    preintf("Comparison result: %d\n", strcompare(argv[1], argv[2]));
    return 0;
}