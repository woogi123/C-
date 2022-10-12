#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, count = 0, i, k;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0)
            count += 1;
    }
    k = count;
    while (k > 0) {
        count = k;
        int_2(n, count);
        k -= 1;
    }

    return 0;
}
int int_2(n, count) {
    count -= 1;
    if (n == 0 || count == 0) {
        printf("%d", n % 2);
        return 0;
    }
    int_2(n = n / 2, count);

}
