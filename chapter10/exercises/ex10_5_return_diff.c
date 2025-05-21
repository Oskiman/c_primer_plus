// Exercise 10.5
// Write a function that returns the difference of the largest 
// and smallest elements of an array of double.  
// Test the function in a simple program.
#include <stdio.h>

double difference(double array[], size_t size);

int main(void)
{
	double source[9] = {1.0, 2.0, 3.0, 4.0, 11.0, 6.0, 7.0, 8.0, 9.0};
	size_t size = sizeof(source) / sizeof(source[0]);
	printf("The difference between the largest & smallest elements is: %.2f\n", difference(source, size));

	return 0;
}

double difference(double array[], size_t size)
{
	int largest, smallest;	// assign first element to both values
	for(int i = 0; i < size; i++)
	{
		if(i == 0)
		{
			smallest = array[0];	// set smallest & largest on first iteration
			largest = array[0];
		}
		if(array[i] > largest)
			largest = array[i];
		
		if(array[i] < smallest)
			smallest = array[i];
	}

	return largest - smallest;
		
}
