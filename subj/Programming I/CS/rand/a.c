//demo of the system() function
#include <stdio.h>
#include <stdlib.h> // Required for the system() function

int main(void) {
    printf("Fetching CPU information...\n");
    printf("---------------------------\n");

// The system() function executes the string as a command
	int result = system("wmic cpu get name, maxclockspeed");

	if (result == 0) {
		printf("\nCommand executed successfully.\n");
	}
	else {
	  	printf("\nCommand failed with code %d.\n", result);
	}
}
