#include <stdio.h>

enum ALGO{
    null,
    FCFS,
    SPN,
    SRT,
    RR,
    HRRN,
    MFQ
};

extern const char Algorithm [7][64];

void printAlgorithm(enum ALGO);
void getAlgorithm(enum ALGO*);
