#include <stdio.h>

void printString(char arr[]);

int main() {
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0'; // Append null character at the end
    puts(str);

    return 0;
}