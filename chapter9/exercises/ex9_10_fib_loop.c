// Exercise 9.10
// Write and test a fibonacci() function that uses a loop
// instead of recursion to calculate fibonacci numbers
#include <stdio.h>

void fibonacci(int num);

int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	fibonacci(num);

	printf("\n");

	return 0;
}

void fibonacci(int num)
{
	int term1 = 0;
	int term2 = 1;
	printf("%d %d ", term1, term2);
	int nterm = term1 + term2;	// initially this is the 3rd term
	for(int i = 3; i <= num; i++)
	{
		printf("%d ", nterm);
		term1 = term2;
		term2 = nterm;
		nterm = term1 + term2;
	}
}
