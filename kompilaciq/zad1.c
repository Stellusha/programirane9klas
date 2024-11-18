#include<stdio.h>

#define FUNCTION(A, B) ((A + B) * (A + B))

int main(){
    int a = 2;
    int b = 4;
    int c = FUNCTION(a, b);

    printf("Result of (%d + %d)^2 is: %d", a, b, c);

    return 0;
}



