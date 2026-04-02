#include <stdio.h>

void printBinary(int n) {
	for (int i = 7; i >= 0; i--) {
		int bit = (n >> i) & 1;
		printf("%d", bit);
	}
}
int main(void) {
	printf("%s", "binary number\toctal\thex\tdecimal\n\n");
	
	for (int x = 1; x <= 256; x++) {
		printBinary(x);
		printf("\t%o\t%x\t%d\n", x, x ,x);
	}
}
