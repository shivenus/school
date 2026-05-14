// Write a program to print the values of the predefined symbolic constants listed in Section 14.9.
#include <stdio.h>

int main(void) {
	printf("__LINE__ = %d\n", __LINE__);
	printf("__FILE__ = %s\n", __FILE__);
	printf("__DATE__ = %s\n", __DATE__);
	printf("__TIME__ = %s\n", __TIME__);
	printf("__STDC__ = %d\n", __STDC__);
	
	return 0;
}