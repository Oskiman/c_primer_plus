// Exercise 6.5
// Write a program that prints a table, with each line giving an integer,
// its square and its cube.  Ask user to input upper & lower limits.
// Use a for loop
#include <stdio.h>

int main(void)
{
	int upper = 0;
	int lower = 0;

	printf("Enter a lower limit: ");	// assume valid input
	scanf("%d", &lower);
	printf("Enter an upper limit: ");	// assume valid input
	scanf("%d", &upper);

	printf("value	squared	cubed\n");
	for(int i = lower; i <= upper; i++)
	{
		printf("%d\t%d\t%d\n", i, i * i, i * i *i);
	}

	printf("\n");

	return 0;
}
