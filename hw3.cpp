#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, j, empty = 1, star = 1;

    for (i = 0; i <= 5; i += 1) {
        for (empty = 5; empty > i; empty -= 1) {
            printf("%s", " ");
        }
        for (star = 1; star <= i * 2 - 1; star += 1) {
            printf("%s", "*");
        }
        printf("\n");
    }




    return 0;

}
