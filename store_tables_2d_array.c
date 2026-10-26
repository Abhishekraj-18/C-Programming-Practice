#include <stdio.h>

// Function prototype to store multiplication table in 2D array
void storeTable(int arr[][10], int n, int m, int number);

int main() {
    int tables[2][10];

    storeTable(tables, 0, 10, 2); // Store table of 2 in row 0
    storeTable(tables, 1, 10, 3); // Store table of 3 in row 1

    // Print table of 2
    for (int i = 0; i < 10; i++) {
        printf("%d\t", tables[0][i]);
    }
    printf("\n");

    // Print table of 3
    for (int i = 0; i < 10; i++) {
        printf("%d\t", tables[1][i]);
    }
    printf("\n");

    return 0;
}

void storeTable(int arr[][10], int n, int m, int number) {
    for (int i = 0; i < m; i++) {
        arr[n][i] = number * (i + 1);
    }
}