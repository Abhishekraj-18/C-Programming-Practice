#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr + n - 1; // Last element ka address

    printf("Reverse order: ");
    while (ptr >= arr) {
        printf("%d ", *ptr --); // Print karke pointer pichhe shift karega
    }

    return 0;
}