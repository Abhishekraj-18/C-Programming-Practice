#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main() {
    char password[100];
    printf("Enter password: ");
    scanf("%s", password);

    salting(password);

    return 0;
}

void salting(char password[]) {
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password); // Copy password to newPass
    strcat(newPass, salt);     // Append salt ("123") at the end of newPass

    puts(newPass);
}