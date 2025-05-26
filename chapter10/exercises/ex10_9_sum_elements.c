// Exercise 10.9
// Write a function that sets each element in an array to the sum
// of the corresponding elements in two other arrays.  That is, if
// array 1 has the values 2, 4, 5 and 8 and array 2 has the values 
// 1, 0, 4 and 6, the function assigns array 3 the values 3, 4, 9 and 14.
// The function should take three array names and an array size as arguments
// Test the function in a simple program
#include <stdio.h>

#define SIZE 4

void sum_elements(int array1[], int array2[], int array3[], int size);

int main(void)
{
	int source_1[SIZE] = {1, 2, 3, 4};
	int source_2[SIZE] = {5, 6, 7, 8};
	int target[SIZE] = {0};

	sum_elements(source_1, source_2, target, SIZE);	

	printf("array 1\tarray 2\tarray 3\n");
	for(int i = 0; i < SIZE; i++)
		printf("%3d\t%3d\t%3d\n", source_1[i], source_2[i], target[i]);

	return 0;
}

void sum_elements(int array1[], int array2[], int array3[], int size)
{
	for(int i = 0; i < size; i++)
	{
		array3[i] = array1[i] + array2[i];
	}
}
