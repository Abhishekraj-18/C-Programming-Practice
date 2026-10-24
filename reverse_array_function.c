#include <stdio.h>

// Function prototypes
void reverse(int arr[], int n);
void printArr(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArr(arr, 5);
    return 0;
}

// Function to print array elements
void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// Function to reverse array elements in-place
void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
}