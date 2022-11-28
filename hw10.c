#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct {
	char name[20];
	char Country[20];
	int Population;
}City;

int main(void) {
	City arr[3];
	int i;
	printf("Input three cities: \n");

	for (i = 0; i < 3; i++) {
		printf("name> ");
		scanf(" %[^\n]s", &arr[i].name);

		printf("Country > ");
		scanf(" %[^\n]s", &arr[i].Country);

		printf("Population> ");
		scanf(" %d", &arr[i].Population);
	}
	printf("\n");
	printf("Printing the three cities\n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n",i+1, arr[i].name, arr[i].Country, arr[i].Population);
	}

	return 0;
}