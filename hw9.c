#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int word;

	printf("input> ");
	word = getchar();
	printf("Output> ");
	while(1) {
		if (word >= 65 && word <= 90) {
			putchar(word += 32);
		}
		else if (word >= 97 && word <= 122) {
			putchar(word -= 32);
		}
		else
			putchar(word);
		word = getchar();


	}
	

	return 0;
}