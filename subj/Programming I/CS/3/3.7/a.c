#include <stdio.h>

int main (void) {
	int x, y, i, power;

	puts("enter base and exponent");
	scanf("%d%d", &x, &y);

	i = 1;
	power = 1;
	
	while (i <= y) {
		power *= x;
		++i;
	}

	printf("%d\n", power);
}
