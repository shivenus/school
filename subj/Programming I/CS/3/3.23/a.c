#include <stdio.h>

int main (void) {
	int counter = 1, number, largest = 0;

	while (counter <= 10) {
		printf("number %d > ", counter);
		scanf("%d", &number);

		if (number > largest) {
			largest = number;
		}		
		counter++;
	}

	printf("largest number is %d\n", largest);
}
