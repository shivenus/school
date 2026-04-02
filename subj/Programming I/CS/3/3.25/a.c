#include <stdio.h>

int main (void) {
	int c = 3;
	
	printf("A\tA+2\tA+4\tA+6\n\n");
	while (c <= 15) {
		printf("%d\t%d\t%d\t%d\n", c, c+2, c+4, c+6);
		c += 3;
	}
}
