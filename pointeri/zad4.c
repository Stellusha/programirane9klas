#include <stdio.h>

int compareasc(void *a, void *b)
{
    int first = *(const int *)a;
    int second = *(const int *)b;

    if (first > second)
    {
        return 1;
    }
    else if (first < second)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int comparedesc(void *a, void *b)
{
    int first = *(const int *)a;
    int second = *(const int *)b;

    if (first > second)
    {
        return 1;
    }
    else if (first < second)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num_1, num_2;

    printf("Enter two nums: ");
    scanf("%d %d", &num_1, &num_2);

    printf("compreasc: %d\n", compareasc(&num_1, &num_2));
    printf("compradesc: %d\n", comparedesc(&num_1, &num_2));
}
