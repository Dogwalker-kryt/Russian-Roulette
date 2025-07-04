#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Welcome to Russion rulette!\n");
    printf("--------------------------\n");
    printf("Enter 'start' to start the game\n");
    printf("Enter 'exit' to exit\n");
    int game();
    char menuinput;
    scanf("%c", menuinput);
    switch (menuinput) {
    case 'start':
        game();
        break;

    case 'exit':
        return 0;
        break;

    default:
        printf("[Error] Enter only 'start' or 'exit'\n");
        return 0;
    }
    return 0; 
}

int game() {
    char first = "blank";
    char second = "blank";
    char thired = "not_blank";
    char fourth = "blank";
    char fith = "blank";
    char sixt = "blank";
    char arr[] = {first, second, thired, fourth, fith, sixt};
    printf("1 Revolver!\n");
    printf("6 Bullets\n");
    printf("1 Bullet kills\n");
    printf("You vs. Program\n");
    printf("-----------------------\n");
    printf(" \n");
    for (int i = 0; i < arr; i++) {
        int shot = rand() % 6;
        printf("[Program] pulls trigger: %d\n", shot);
        if (shot = thired) {
            printf("Programm shot him self!\n");
            printf("You won!\n");
            return 0;
        } else {
            printf("[You] pulls trigger: %d\n", shot);
            if (shot == thired) {
                printf("You lost!\n");
                return 0;
            } else {
                printf("[Program] pulls trigger: %d\n", shot);
                if (shot = thired) {
                    printf("Programm shot him self!\n");
                    printf("You won!\n");
                    return 0;
                } else {
                    printf("[You] pulls trigger: %d\n", shot);
                    if (shot == thired) {
                        printf("You lost!\n");
                        return 0;
                    } else {
                        printf("[Program] pulls trigger: %d\n", shot);
                        if (shot = thired) {
                            printf("Programm shot him self!\n");
                            printf("You won!\n");
                            return 0;
                        } else {
                            printf("[You] pulls trigger: %d\n", shot);
                            if (shot == thired) {
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