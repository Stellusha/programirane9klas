#include <stdio.h>

void swap(void *a, void *b)
{
    int temp = *((int *)a);
    *((int *)a) = *((int *)b);
    *((int *)b) = temp;
}

void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap; %d %d", a, b);
    swap(&a, &b);
    printf("\nAfter swap: %d %d", a, b);
}
