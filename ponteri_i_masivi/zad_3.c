#include <stdio.h>
#include <string.h>

void strhalf(const char *str, char **prt)
{
    int len = strlen(str);
    *prt = (char *)(str + len / 2);
}

int main()
{
    char str[100];
    char *halfText = NULL;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    strhalf(str, &halfText);

    printf("The half of the string is: %s\n", halfText);
}