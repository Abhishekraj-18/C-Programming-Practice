#include <stdio.h>
#include <string.h>

// Function prototype to check if a character is present in a string
void checkChar(char str[], char ch);

int main() {
    char str[] = "Abhishek";
    char ch = 'h';

    checkChar(str, ch);

    return 0;
}

void checkChar(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("character is present!\n");
            return;
        }
    }
    printf("character is NOT present :(\n");
}