#include <stdio.h>

// Function declarations
void namaste();
void bonjour();

int main() {
    printf("enter f for French & i for Indian : ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i' || ch == 'I') {
        namaste();
    } else if (ch == 'f' || ch == 'F') {
        bonjour();
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}

// Function definitions
void namaste() {
    printf("Namaste\n");
}

void bonjour() {
    printf("Bonjour\n");
}