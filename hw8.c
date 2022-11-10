#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void doublepow(double* a, double b) {
	*a = pow(*a, b);
}
void doublesqrt(double x) {
	printf("%.3lf", sqrt(x));
}


int main(void) {
	double arr[5];
	int i;
	double sum = 0, result = 0, a, b;
	printf("Enter 5 real number: ");
	scanf(" %lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
	sum = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	
	for (i = 0; i < 5; i++) {
		arr[i] = arr[i] - sum;
	}

	for (i = 0; i < 5; i++) {
		doublepow(&arr[i], 2);
		result += arr[i];
	}
	result /= 5;
	
	doublesqrt(result);

	return 0;
}