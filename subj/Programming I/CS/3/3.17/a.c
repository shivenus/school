#include <stdio.h>

int main (void) {
	int acc;
	float bal, cha, cre, lim, bal2;

	printf ("%s", "Enter account number (-1 to end): ");
	scanf ("%d", &acc);

	while (acc != -1) {
		printf ("%s", "Enter beginning balance: ");
		scanf ("%f", &bal);

		printf ("%s", "Enter total charges: ");
		scanf ("%f", &cha);

		printf ("%s", "Enter total credits: ");
		scanf ("%f", &cre);

		printf ("%s", "Enter credit limit: ");
		scanf ("%f", &lim);

		bal2 = bal + cha - cre;


		if (bal2 > lim) {
			printf ("Account:\t%d\n", acc);
			printf ("Credit limit:\t%.2f\n", lim);
			printf ("Balance:\t%.2f\n", bal2);
			puts ("Credit Limit Exceeded.");		
		}
	
		printf ("%s", "\nEnter account number (-1 to end): ");
		scanf ("%d", &acc);	
	}

}
