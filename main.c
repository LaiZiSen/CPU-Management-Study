#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int arrivalTime;
    int serviceTime;
}Process;

typedef struct {
    Process *arr;
    int length;
}ProcessArr;

enum ALGO{
    null,
    FCFS,
    SPN,
    SRT,
    RR,
    HRRN,
    MFQ
};

const char Algorithm [7][64] = {
    "NULL",
    "First Come First Served (FCFS)",
    "Shortest Process Next (SPN)",
    "Shortest Remaining Time (SRT)",
    "Round Robin (RR)",
    "Highest Response Ratio Next (HRRN)",
    "Multilevel Feedback Queue Scheduling (MFQ)"
};

void welcome();
void mainMenu();
void printProcessArr(ProcessArr);
void printAlgorithm(enum ALGO);
void addProcess(ProcessArr);
char getChoice();
void clear();
void getAlgorithm(enum ALGO*);

int main () {

    ProcessArr processArr;
    enum ALGO algorithm = null;

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

void printProcessArr(ProcessArr processArr) {
    printf("Process List: \n");

    if(processArr.length <= 0) {
        printf("Empty \n");
        return;
    }

    printf("%4s", "AT |");
    for (int  i = 0; i < processArr.length; i++) {
        printf("%2d |", processArr.arr[i].arrivalTime);
    }
    printf("\n");
    
    printf("%4s", "ST |");
    for (int i = 0; i < processArr.length; i++) {
        printf("%2d |", processArr.arr[i].serviceTime);
    }
    printf("\n\n");

}

void printAlgorithm(enum ALGO algo) {
    printf("Algorithm selected: %s\n\n", Algorithm[algo]);
}

void addProcess(ProcessArr processArr) {
    // get arrival time
    //
    // get service time
    //
    // 
}

void clear() {
    printf("\033[H\033[2J");
}

char getChoice() {
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
