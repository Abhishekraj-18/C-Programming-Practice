#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);

    // Loop to print the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", n * i);
    }

    return 0;
}