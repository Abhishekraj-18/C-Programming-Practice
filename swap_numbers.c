#include <stdio.h>

// Function prototypes
void swap(int a, int b);            // Call by Value
void _swap(int *a, int *b);         // Call by Reference

int main() {
    int x = 3, y = 5;

    // Call by Value Example
    printf("--- Call by Value ---\n");
    swap(x, y);
    printf("In main: x = %d & y = %d (Unchanged)\n\n", x, y);

    // Call by Reference Example
    printf("--- Call by Reference ---\n");
    _swap(&x, &y);
    printf("In main: x = %d & y = %d (Swapped!)\n", x, y);

    return 0;
}

// Call by Value (Does not change original variables in main)
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("Inside function: a = %d & b = %d\n", a, b);
}

// Call by Reference (Changes original variables using pointers)
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}