#include <stdio.h>
#include "../header/process.h"

void printProcessArr(ProcessList processList) {
    printf("Process List: \n");

    if(processList.length <= 0) {
        printf("Empty \n");
    }

    printf("AT |");
    for (int i = 0; i < processList.length; i++) {
        printf("%2d |", processList.arr[i].arrivalTime);
    }
    printf("\n");

    printf("ST |");
    for (int i = 0; i < processList.length; i++) {
        printf("%2d |", processList.arr[i].serviceTime);
    }
    printf("\n\n");
}

void addProcess(){

}

void removeProcess() {

}


