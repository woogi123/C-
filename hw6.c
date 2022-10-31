#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, d, e, i = 0, j = 0, k = 0;
	int str[5], str_O[5], str_E[5];

	printf("Please input five integers: ");
	scanf(" %d %d %d %d %d", &a, &b, &c, &d, &e);

	str[0] = a;
	str[1] = b;
	str[2] = c;
	str[3] = d;
	str[4] = e;

	while (i < 5) {
		if (a % 2 == 0) {
			str_E[j] = str[i];
			j += 1;
		}
		else {
			str_O[k] = str[i];
			k += 1;
		}
		i += 1;
	}
	printf("Odd number: ");
	i = 0;
	while (i < k) {
		printf("%d ", str_O[i]);
		i += 1;
	}
	printf("\n");
	printf("Even number: ");
	i = 0;
	while (i < j) {
		printf("%d ", str_E[i]);
		i += 1;
	}


	return 0;
}