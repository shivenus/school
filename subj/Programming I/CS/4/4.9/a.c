#include <stdio.h>

int main(void) {
	int c, val, sum = 0;

	printf("enter count > ");
	scanf("%d", &c);

	puts("↓ enter values");
	for (int a = 0; a < c; a++) {
		scanf("%d", &val);
		sum += val;
	}
	printf("total is %d\n", sum);
}
