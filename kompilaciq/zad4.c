#include <stdio.h>
#include <math.h>

void raise_to_fourth_power(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (long)pow(arr[i], 4); 
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    long arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%ld", &arr[i]); 
    }

    raise_to_fourth_power(arr, n);

    printf("Array after raising to the fourth power:\n");
    for (int i = 0; i < n; i++) {
        printf("%ld ", arr[i]); 
    }
    printf("\n");

    return 0;
}
