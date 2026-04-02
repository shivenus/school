#include <stdio.h>

int main (void) {
	float gl = 0, mi = 0;
	float totGl = 0, totMi = 0;

	printf("%s", "Enter the gallons used (-1 to end) ");
	scanf("%f", &gl);

	while (gl != -1) {
		printf("%s", "Enter the miles driven (-1 to end) ");
		scanf("%f", &mi);

		printf("The miles/gallons for this tank was %f\n\n", mi / gl);

		totGl += gl;
		totMi += mi;

		printf("%s", "Enter the gallons used (-1 to end) ");
		scanf("%f", &gl);
	}
	// the if is used to prevent a division by zero, if the first input is -1
	if (totGl != 0)		
		printf("The overall average miles/gallon was %f\n", totMi / totGl);	
}
