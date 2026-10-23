#include <stdio.h>
// #include <stdlib.h>
#include "../header/algo.h"

const char Algorithm [7][64] = {
    "NULL",
    "First Come First Served (FCFS)",
    "Shortest Process Next (SPN)",
    "Shortest Remaining Time (SRT)",
    "Round Robin (RR)",
    "Highest Response Ratio Next (HRRN)",
    "Multilevel Feedback Queue Scheduling (MFQ)"
};

void printAlgorithm(enum ALGO algo){
    printf("Algorithm selected: %s\n\n", Algorithm[algo]);
}


void getAlgorithm(enum ALGO *algo) {

}
