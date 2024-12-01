#include <stdio.h>
#include "mystrings.c"

int main(int argc, char *argv[]){
    if (argc != 2){
        printf("Usage: ./strlength.out <string>\n");
        return 1;
    }
    printf("Length: %d\n", strlength(argv[1]));
    return 0;
}