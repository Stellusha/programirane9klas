#include <stdio.h>
#include "maths.h"

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    long result = factorial(n);

    printf("Factorial of %d is %ld\n", n, result);

    return 0;
}


