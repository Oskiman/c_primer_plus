// Ch.5, ex.2
// program asks for an integer then outputs all integers from
// given integer up to and including a value greater by 10
// example: enter 5, output will run from 5 to 15
#include <stdio.h>

int main(void)
{
	int input = 0;
	printf("Enter an integer: ");	// assume valid input
	scanf("%d", &input);
	for(int i = input; i <= (input + 10); i++)
	{
		printf("%d\n", i);
	}

	return 0;
}
