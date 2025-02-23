#include <stdio.h>

void main()
{
    double a, b;
    double *ptra = &a, *ptrb = &b;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("%lf %lf\n", a, b);
    printf("%p  %p", &ptra, &ptrb);
}
