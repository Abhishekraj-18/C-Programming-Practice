#include <stdio.h>

// Function prototype
int calcPercentage(int science, int math, int sanskrit);

int main() {
    int sci = 95;
    int math = 90;
    int sanskrit = 92;

    printf("percentage is : %d%%\n", calcPercentage(sci, math, sanskrit));
    return 0;
}

// Function definition
int calcPercentage(int science, int math, int sanskrit) {
    return ((science + math + sanskrit) / 3);
}