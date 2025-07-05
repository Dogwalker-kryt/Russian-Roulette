#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Welcome to Russian Roulette!\n");
    printf("--------------------------\n");
    printf("Enter 1 to start the game\n");
    printf("Enter 2 to exit\n");
    int game();
    int menuinput;
    scanf("%d", menuinput);
    switch (menuinput) {
        case 1:
            game();
            break;

        case 2:
            return 0;

        default:
            printf("[Error] Enter only 'start' or 'exit'\n");
            break;
    }
}

int game() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("1 Revolver!\n");
    printf("6 Bullets\n");
    printf("1 Bullet kills\n");
    printf("You vs. Program\n");
    printf("-----------------------\n");
    srand(time(NULL));  

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        int shot = rand() % 6; 
        printf("[Program] pulls trigger: %d\n", shot);

        if (shot == 0) {  
            printf("Program shot itself!\n");
            printf("You won!\n");
            return;
        } else {
            printf("[You] pulls trigger\n");
            if (shot == 1) {  
                printf("You lost!\n");
                return;
            } else {
                printf("[Program] pulls trigger\n");
                if (shot == 2) {  
                    printf("Program shot itself!\n");
                    printf("You won!\n");
                    return;
                } else {
                    printf("[You] pulls trigger\n");
                    if (shot == 3) { 
                        printf("You lost!\n");
                        return;
                    } else {
                        printf("[Program] pulls trigger\n");
                        if (shot == 4) {  
                            printf("Program shot itself!\n");
                            printf("You won!\n");
                            return;
                        } else {
                            printf("[You] pulls trigger\n");
                            if (shot == 5) {  
                                printf("You lost!\n");
                                return;    
                            } else {
                                printf("Something went wrong.\n");
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
}
