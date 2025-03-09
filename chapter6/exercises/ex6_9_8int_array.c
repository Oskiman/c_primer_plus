// Exercise 6.9
// Write a program that reads eight integers into an array then
// prints them in reverse order
#include <stdio.h>

int main(void)
{
	int array_of_ints[8];
	int input = 0;
	int array_length = sizeof(array_of_ints) / sizeof(array_of_ints[0]);	// get length of array
	
	for(int i = 0; i < array_length; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", &input);			// populate array
		array_of_ints[i] = input;
	}

	for(int i = 0; i < array_length; i++) 		// output original array
	{
		printf("%d ", array_of_ints[i]);
	}
	printf("\n");

	for(int i = array_length - 1; i >= 0; i--)	// output array in reverse
	{
		printf("%d ", array_of_ints[i]);
	}

	printf("\n");

	return 0;
}
