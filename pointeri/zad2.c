#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    char input[MAX_LENGTH];

    printf("Enter a string: ");
    if (fgets(input, MAX_LENGTH, stdin) != NULL)
    {
        char *newline = strchr(input, "\n");
        if (newline)
        {
            *newline = "\0";
        }
    }
}

printf("After string: \"%s\"\n", input);
