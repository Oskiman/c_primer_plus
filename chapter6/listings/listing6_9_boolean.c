// boolean.c - using a _Bool variable
#include <stdio.h>

int main(void)
{
	long num;
	long sum = 0L;
	_Bool input_is_good;

	printf("Please enter an integer to be summed. ");
	printf("Enter q to quit.\n");
	input_is_good = (scanf("%ld", &num) == 1);
	while(input_is_good)
	{
		sum = sum + num;
		printf("Please enter the next integer to be summed. ");
		printf("Enter q to quit.\n");
		input_is_good = (scanf("%ld", &num) == 1);
	}

	printf("Those integers sum to %ld.\n", sum);

	return 0;
}
