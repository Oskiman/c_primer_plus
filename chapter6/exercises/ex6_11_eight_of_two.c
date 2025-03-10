// Exercise 6.11
// Write a program that creates an eight element array of type int and
// sets the elements to the first 8 powers of 2 and then prints the values.
// For variety use a do-while loop to display the values
#include <stdio.h>
#include <math.h>

int main(void)
{
	int array_of_ints[8];

	int length = sizeof(array_of_ints) / sizeof(array_of_ints[0]);
	//long long value = 1;
	for(int i = 0; i < length; i++)
	{
		array_of_ints[i] = pow(2, i);	// had to compile with -lm flag to #include <math.h>
		//array_of_ints[i] = value *= 2;	// starts one step too far, 2, 4, 8
	}

	int count = 0;
	do
	{
		printf("%d ", array_of_ints[count]);
		count++;
	}while(count < length);

	printf("\n");

	return 0;
}
