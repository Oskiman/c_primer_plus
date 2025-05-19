// Exercise 10.3
// Write a function that returns the largest value stored in an
// array of int.  Test the function in a simple program
#include <stdio.h>

int largest(int array[], size_t size);

int main(void)
{
	int source[9] = {1, 2, 3, 4, 11, 6, 7, 8, 9};
	size_t size = sizeof(source) / sizeof(source[0]);
	printf("The largest integer in the array is: %d\n", largest(source, size));

	return 0;
}

int largest(int array[], size_t size)
{
	int largest = 0;
	for(size_t i = 0; i < size; i++)
	{
		if(array[i] > largest)
			largest = array[i];
	}

	return largest;
}
