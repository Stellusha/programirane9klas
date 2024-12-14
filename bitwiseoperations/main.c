#include <stdio.h>
#include "quadricroods.h"

void test_roots(long double a, long double b, long double c){
    QuadraticRootsResult result = findroots(a, b, c);
    if (result.nonerealroots){
        printf("None real roots for %.2Lf*x^2 + %.2Lf*x + %.2Lf = 0\n", a, b, c);
    }else
    {
        printf("Roots for %.2Lf*x^2 + %.2Lf*x + %.2Lf = 0 are:\n x1 = %.2Lf, x2 = %.2Lf\n", a, b, c, result.x1, result.x2);
    }
    
}

int main(){
    printf("Test with int: \n");
    test_roots(1, -3, 2);

    printf("\nTesting with float:\'n");
    test_roots(1.0f,  -5.0f, 6.0f);

    printf("Test with double:\n");
    test_roots(1.0, 2.0, 5.0);

    return 0;
}







