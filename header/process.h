typedef struct {
    int arrivalTime;
    int serviceTime;
} Process;

typedef struct {
    Process *arr;
    int length;
} ProcessList;

void printProcessArr(ProcessList);
void addProcess();
void removeProcess();



