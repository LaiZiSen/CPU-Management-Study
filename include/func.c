#include <stdio.h>
#include "../header/func.h"


char getChoice(){
    char choice;

    printf("%s", "Enter Choice: ");
    scanf("%c", &choice);

    return choice;
}

int getInt(char* msg) {
    int output;

    printf("%s", msg);
    scanf("%d", &output);

    return output;
}

void clear(){
    printf("\033[H\033[2J");
}
