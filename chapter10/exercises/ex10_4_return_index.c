// Exercise 10.4
// Write a function that returns the index of largest value stored in an
// array of double.  Test the function in a simple program
#include <stdio.h>

int largest(double array[], size_t size);

int main(void)
{
	double source[9] = {1.0, 2.0, 3.0, 4.0, 11.0, 6.0, 7.0, 8.0, 9.0};
	size_t size = sizeof(source) / sizeof(source[0]);
	printf("The largest double is at index: %d\n", largest(source, size));

	return 0;
}

int largest(double array[], size_t size)
{
	int largest;
	//if(i == 0)
	//	largest = array[i];

	for(size_t i = 0; i < size; i++)
	{
		if(i == 0)
			largest = array[i];

		if(array[i] > largest)
			largest = array[i];
	}

	for(size_t i = 0; i < size; i++)
	{
		if(array[i] == largest)
			return i;
	}

	return -1;
}
