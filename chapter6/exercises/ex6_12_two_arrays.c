// Program creates two 8 element arrays of type double
// have user enter values for the first array
// elements of second array are the cumulative totals
// of the elements of the first array
// element four of second array equals sum of first four
// elements of first array
// 5th element of second array = 4th element of second array
// plus 5th element of first array, so use a single loop (no nesting)
// loop to display both arrays on separate lines
#include <stdio.h>

int main(void)
{
	double inputs[8];
	double sum_elements[8];

	int length = sizeof(inputs) / sizeof(inputs[0]);

	for(int i = 0; i < length; i++)
	{
		printf("Enter a number: ");
		scanf("%lf", &inputs[i]);
	}

	for(int i = 0; i < length; i++)
	{
		if(i == 0)
		{
			sum_elements[i] = inputs[i];
		}
		else
		{
		sum_elements[i] = sum_elements[i - 1] + inputs[i];
		}
	}
	// output inputs
	for(int i = 0; i < length; i++)
		printf("%.4lf ", inputs[i]);
	
	printf("\n");

	// output summed elements
	for(int i = 0; i < length; i++)
		printf("%.4lf ", sum_elements[i]);

	printf("\n");

	return 0;
}
