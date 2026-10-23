#include <stdio.h>
#include <stdlib.h>
#include "header/func.h"
#include "header/process.h"
#include "header/algo.h"

void welcome();
void mainMenu();

int main () {

    ProcessList processArr;
    enum ALGO algorithm= null;

    processArr.length = 5;
    processArr.arr = malloc(sizeof(Process) * processArr.length);

    processArr.arr[0] = (Process) {0, 2};
    processArr.arr[1] = (Process) {1, 5};
    processArr.arr[2] = (Process) {4, 2};
    processArr.arr[3] = (Process) {5, 1};
    processArr.arr[4] = (Process) {5, 2};

    while (1) {
        
        clear();
        welcome();

        printProcessArr(processArr);
        printAlgorithm(algorithm);

        mainMenu();

        char choice = getChoice();

        switch (choice) {
            case '1':
                // add process 
                printf("Add process");
                break;

            case '2':
                // remove process
                printf("Remove process");
                break;

            case '3':
                // choose algorithm
                break;

            case '4':
                return 0;

            default:
                break;
        }
    }

    printProcessArr(processArr);
    
    printf("%c\n", getChoice());

    return 0;
}


void welcome() {
    printf("Welcome to CPU-Management Simulator\n");
    printf("\n");
}

void mainMenu(){
    printf("1. Add Process\n");
    printf("2. Remove Process\n");
    printf("3. Choose Algorithm\n");
    printf("4. Exit\n");
    printf("\n");
}

