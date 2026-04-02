#include <stdio.h>

int main (void) {
	int c = 1, t = 10;

	printf ("N\t10*N\t100*N\t1000*N\n\n");
	while (c <= 10) {
		printf ("%d\t%d\t%d\t%d\n", c, c*10, c*100, c*1000);
		c++;
	}
}
