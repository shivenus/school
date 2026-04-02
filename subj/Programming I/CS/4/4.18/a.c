#include <stdio.h>

int main(void) {
	int val, count = 0;

	do {
	puts("input 5 values, 1 - 30");
	scanf("%d", &val);
	

	if (val >= 1 && val <= 30) {
		for(int c = 0; c < val; c++) {
			printf("%s", "*");
		}
		count++;
		printf("%s", "\n\n");

	}
	else {
		puts("out of range\n");
	}
	
	} while (count < 5);
	
}
