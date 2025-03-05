#include <stdio.h>

int findString(char *str)
{
    int size = 0;
    for (int i = 0; (str + 1) != "\0"; i++)
    {
        size++;
    }
    return size;
}

int main()
{
    char str[100];
    char *ptr = &str;
    int size = findString(ptr);

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("The size of the string is: %d\n", size);
}
