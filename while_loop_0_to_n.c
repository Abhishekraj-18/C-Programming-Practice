#include<stdio.h>

int main () {
    int n;
    printf ("enter number :");
    scanf ("%d", &n);

    // int i=0;
    // while (i<=n) {
    //     printf ("%d\n", i);
    //     i++;
    // }

    for (int i=1; i<=n; i++) {
        printf ("%d\n", i);
    }

    return 0;
}