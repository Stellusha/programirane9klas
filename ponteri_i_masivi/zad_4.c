#include <string.h>

#define COLS 4

void two_masiv[int(*matrix)[COLS], int rows]
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%5d", *(*matrix) + j);
        }
    }
}

int main()
{
    int matrix[3][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int rows = sizeof(matrix) / sizeof(matrix[0]);

    printf("Matrix:\n");
    printMatrix(matrix, rows);
}