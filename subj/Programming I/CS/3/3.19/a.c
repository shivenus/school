#include <stdio.h>

int main (void) {
	float loan, rate, inter;
	int days;
	
	printf ("%s", "Enter loan principal (-1 to end): ");
	scanf ("%f", &loan);

	while (loan != -1) {
		printf ("%s","Enter interest rate: ");
		scanf ("%f", &rate);

		printf ("%s", "Enter term of the loan in days: ");
		scanf ("%d", &days);

		inter = loan * rate * days / 365;
		printf ("The interest charge is $%.2f\n", inter);
		
		printf ("%s", "\nEnter loan principal (-1 to end): ");
		scanf ("%f", &loan);			
	}		
}
