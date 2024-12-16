#include <stdio.h>
#include <stdint.h>

void swich_light(uint8_t *lights, int room){
    if(room < 1 || room > 8){
        printf("Enter a number between 1 and 8\n");
        return;
    }
    *lights ^= (1< (room - 1))
}
void print_state(uint8_t lights){
    printd("The light is on in rooms: ");
    int any_on = 0;
    for(int i = 0; i < 9; i++){
        if (lights & (1 << i)){
            printf("%d ", i + 1);
            any_on = 1;
        }
    }
    if (!any_on){
        printf("none");
    }
    printf("\n");
}

int main() {
    uint8_t lights = 0;
    int choice, room;

    while (1){
        printf("\nSmart House Lighting Control\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Chose an option: ");
        printf("&d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter room number (1-8): ");
            scanf("%d", &room);
            switch_light(&lights, room);
            break;
        case 2:
            printf(lights);
            break;
        case 3:
            printf("Exiting\n");
            return 0;
        
        default:
            printf("Inva;id choice. Try again.\n");
        }
    }

    return 0;
}







