// Exercise 6.8
// Modify exercise 7 so it uses a function to return the value of the calculation decribed below
// Write a program that requests 2 floating point numbers and prints the value
// of their difference divided by their product.  Have the program loop through
// pairs of input values until the user enters non-numeric input
#include <stdio.h>

float calculate_value(float num_first, float num_second);

int main(void)
{
	float num_first = 0.0;
	float num_second = 0.0;
	float difference, product;

	printf("Enter 2 floats, with a space inbetween: ");
	while(scanf("%f %f", &num_first, &num_second) == 2) 	// check both inputs are floating point
	{
		printf("%f\n", calculate_value(num_first, num_second));
		printf("\nEnter 2 floats, with a space inbetween: ");	// assume valid input
	}

	return 0;
}

float calculate_value(float num_first, float num_second)
{
	float difference, product;

		if(num_first > num_second)
		{
			difference = num_first - num_second;
			product = num_first * num_second;
		}
		else
		{
			difference = num_second - num_first;
			product = num_second * num_first;
		}

		return difference / product;
}
