#include <stdio.h>

int main (void) {
	int c = 1, num, lgst = 0, lgst2 = 0;

	while (c <= 10) {
		printf("Enter number %d:", c);
		scanf("%d", &num);

		if (num > lgst) {
			lgst2 = lgst;
			lgst = num;
		}
		else if (num > lgst2) {
			lgst2 = num;
		}
		c++;
	}
	printf ("largest is %d, runner up is %d", lgst, lgst2);
}
