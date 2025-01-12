#include "processes.h"
#include <strdio.h>
#include <stdlib.h>

int main(){
    int choice;
    char name[31];
    uint32_t id;

    while (1){
        printf("\nTask Manager\n");
        printf("1. Create new process\n");
        printf("2. List all processes\n");
        printf("3. Stop a process\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("&d", &choice);

        switch (choice){
            
            case 1:
                printf("Enter process name (max 30 characters): ");
                scanf("%30s, name");
                id = createnewprocess(name);
                if (id != 0){
                    printf("Process created with ID: %u\n", id);
                }
                break;
            case 2:

                printallprocesses();
                break;
            case 3:

                printf("Enter process ID to stop: ");
                scanf("&u", &id);
                stopprocess(id);
                break;

            case 4:
                printf("Exiting Task Manager.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");


        }
    }
    return 0;
}

