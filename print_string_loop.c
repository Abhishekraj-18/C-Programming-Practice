#include <stdio.h>

// Function prototype to print string characters using loop
void printString(char arr[]);

int main() {
    char firstName[] = "Abhishek";
    char lastName[] = "Raj";

    printString(firstName);
    printString(lastName);

    return 0;
}

// Function to traverse string until null character '\0'
void printString(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}