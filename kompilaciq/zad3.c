#include <stdio.h>
#include "transformation.h"

int main() {
    const char *test_cases[] = { "-123", "12ab23", "456", "", " 789", NULL };
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]) - 1; // Subtract 1 for NULL terminator

    for (int i = 0; i < num_cases; i++) {
        const char *input = test_cases[i];
        transformation result = string_to_int(input);

        printf("Input: '%s'\n", input ? input : "NULL");
        if (strlen(result.error) == 0) {
            printf("Result: %ld, Error: None\n", result.result);
        } else {
            printf("Result: %ld, Error: %s\n", result.result, result.error);
        }
        printf("\n");
    }

    return 0;
}
