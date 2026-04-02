#include <stdio.h>

int main (void) {
	int hrs;
	float rate, sal;

	printf ("%s", "Enter # of hours worked (-1 to end): ");
	scanf ("%d", &hrs);

	while (hrs != -1) {
		printf ("%s", "Enter hourly rate of the worker ($00.00) ");
		scanf ("%f", &rate);

		if (hrs <= 40)
			sal = rate * hrs;
		else
			sal = (40 * rate) + ((hrs - 40) * (rate * 1.5));

		printf ("Salary is %.2f\n", sal);
		
		printf ("%s", "\nEnter # of hours worked (-1 to end): ");
		scanf ("%d", &hrs);
	}
}
