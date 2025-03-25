// Exercise 7.9
// Write a program that accepts an integer as input and then
// displays all the prime numbers smaller than or equal to that number

#include <stdio.h>

int main(void)
{
	int input = 0;
	int count = 0;
	printf("Enter an integer: ");
	scanf("%d", &input);		// assume valid input

	for(int i = 2; i <= input; i++)	// we start at 2 because 0 & 1 are not primes
	{
		count = 0;

		for(int j = 2; j <= i / 2; j++)
		{
			if(i % j == 0)	// not prime
			count++;
			break;
		}

		if(count == 0)
			printf("%d\n", i);
	}

	return 0;
}
