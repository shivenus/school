#include <stdio.h>

int main (void) {
	int a = 4;
	
	printf ("pre-decrementing=\t%d\n", --a);

	a = 4; // reset to 4
	printf ("post-decrementing=\t%d\n", a--);
	// first prints, then decrements
	
}
