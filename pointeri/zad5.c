#include <stdio.h>

int compareasc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int comparedesc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void swapelements(void *a, void *b)
{
    int temp = *((int *)a);
    *((int *)a) = *((int *)b);
    *((int *)b) = temp;
}

void bubblesort(void *arr, int n, int (*compare)(const void *, const void *), void (*swapelements)(void *, void *))
{
    int *array = (int *)arr;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (compare(&array[j], &array[j + 1]) > 0)
            {
                swapelements(&array[j], &array[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {2, 5, 43, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubblesort(arr, n, compareasc, swapelements);
    printf("Sorted ascending: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubblesort(arr, n, comparedesc, swapelements);
    printf("Sorted descending: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
