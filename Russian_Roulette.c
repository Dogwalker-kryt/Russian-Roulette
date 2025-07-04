#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Welcome to Russion rulette!\n");
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
            break;

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
    printf(" \n");
    for (int i = 0; i < arr; i++) {
        int shot = rand() % 6;
        printf("[Program] pulls trigger: %d\n", shot);
        if (shot = "not_blank") {
            printf("Programm shot him self!\n");
            printf("You won!\n");
            return 0;
        } else {
            printf("[You] pulls trigger\n");
            if (shot = 4) {
                printf("You lost!\n");
                return 0;
            } else {
                printf("[Program] pulls trigger\n");
                if (shot = 4) {
                    printf("Programm shot him self!\n");
                    printf("You won!\n");
                    return 0;
                } else {
                    printf("[You] pulls trigger\n");
                    if (shot = 4) {
                        printf("You lost!\n");
                        return 0;
                    } else {
                        printf("[Program] pulls trigger\n");
                        if (shot = 4) {
                            printf("Programm shot him self!\n");
                            printf("You won!\n");
                            return 0;
                        } else {
                            printf("[You] pulls trigger:\n");
                            if (shot = 4) {
                                printf("You lost!\n");
                                return 0;    
                            } else {
                                printf("if you reached this point something went wrong\n");
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
}
