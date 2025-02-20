// Ch. 5 Ex.1
// program converts time in minutes to time in hours and minutes
// use #define or const for a symbolic constant for 60
// use a while loop to allow repeated use
// terminate loop if 0 or less is entered
#include <stdio.h>

int main(void)
{
	const int sixty = 60;
	int num_minutes = 1;	// arbitrary value so we enter while loop
	int hours = 0;
	int minutes = 0;
	
	while(num_minutes > 0)	// assume valid input
	{
		printf("Enter a time in minutes (0 or less to quit): ");
		scanf("%d", &num_minutes);
		if(num_minutes <= 0)	
			break;	// avoids unnecessary output
		hours = num_minutes / sixty;
		minutes = num_minutes % sixty;
		printf("%d minutes is %d hours and %d minutes\n", num_minutes, hours, minutes);
	}

	return 0;
}
