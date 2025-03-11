#include <stdio.h>

int findString(char *str)
{
    int size = 0;
    while (*(str + i) != "\0")
    {
        size++;
    }
    return size;
}

int main()
{
    char str[100];
    char *ptr = &str;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int size = findString(str);

    printf("The size of the string is: %d\n", size);
}
