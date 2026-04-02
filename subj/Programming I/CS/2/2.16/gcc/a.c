#include <stdio.h>

int main(void) {
	int x, y;

	puts("enter two ints:");
	scanf("%d%d", &x, &y);

	printf("the sum is %d\n", x+y);
	printf("the product is %d\n", x*y);
	printf("the difference is %d\n", x-y);
	printf("the quotient is %d\n", x/y);
	printf("the remainder is %d\n", x/y);
	
	printf("Sum: %d\nProduct: %d\nDifference: %d\nQuotient: %d\nRemainder %d\n", x+y, x*y, x-y, x/y, x%y);
}
