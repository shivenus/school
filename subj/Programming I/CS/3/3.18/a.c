#include <stdio.h>

int main (void) {
	float sales, salary;
	
	printf ("%s", "Enter sales in dollars (-1 to end): ");
	scanf("%f", &sales);

	while (sales != -1) {
		salary = 200 + (sales * .09);
		printf ("Salary is $%.2f\n", salary);	

		printf ("%s", "\nEnter sales in dollars (-1 to end): ");
		scanf("%f", &sales);
	}
}
