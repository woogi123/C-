#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int n, i, end = 0;
    while (end == 0) {
        printf("Please enter a number: ");
        scanf("%d", &n);
        if (n == 1) {
            printf("change number\n");
        }
        else
            end = 1;
        if (n == 2) {
            printf("It is a prime number");
            end = 1;
        }

    }

    if (n != 2) {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                printf("It is not a prime number.");
                break;
            }
            else if (i == n - 1)
                printf("It is a prime number");
        }
    }


    return 0;
}