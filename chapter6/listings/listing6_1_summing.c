// summing.c sums integers entered interactively
#include <stdio.h>

int main(void)
{
	long num;
	long sum = 0L;	// initialise sum to 0
	int status;

	printf("Please enter an integer to be summed. ");
	printf("Enter q to quit.\n");

	while(scanf("%ld", &num) == 1)
	{
		sum = sum + num;
		printf("Please enter the next integer to be summed. ");
		printf("Enter q to quit.\n");
	}

	printf("Those integers sum to %ld.\n", sum);

	return 0;
}
