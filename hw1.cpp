#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int result_AND,result_OR,result_XOR,num1,num2;
	printf("input two integers : ");
	scanf("%d %d", &num1, &num2);
	
	result_AND = num1 & num2;
	printf("%d & %d = %d\n", num1, num2, result_AND);

	result_OR = num1 | num2;
	printf("%d | %d = %d\n", num1, num2, result_OR);

	result_XOR = num1 ^ num2;
	printf("%d ^ %d = %d\n", num1, num2, result_XOR);

	return 0;
}