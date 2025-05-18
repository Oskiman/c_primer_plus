// Exercise 10.2
// Write a program that initiliases an array of double
// then copies the contents of the array into two other arrays.
// (All three arrays should be declared in the main program).
// To make the first copy, use a function with array notation.
// To make the second copy, use a function with pointer notation
// and pointer incrementing.  Have each function take as arguments
// the name of the target array and the number of elements to be copied.
// That is, the function calls would look like this, given the
// following declarations:
// double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
// double target1[5];
// double target2[5];
// copy_arr(source, target1, 5);
// copy_ptr(source, target2, 5);
#include <stdio.h>

void copy_arr(double source[], double target[], size_t size);
void copy_ptr(double *src_ptr, double *target_ptr, size_t size);
int main(void)
{
	// source array
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

	//initiliase both target arrays to 0.0
	double target1[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
	double target2[5] = {0.0, 0.0, 0.0, 0.0, 0.0};

	// get size of array(s)
	size_t size = sizeof(source) / sizeof(source[0]);

	//declare & initialise pointers to source & target arrays
	double *src_ptr = source;
	double *target_ptr = target2;

	copy_arr(source, target1, size);
	copy_ptr(src_ptr, target_ptr, size);
	
	// output arrays
	printf("source\ttarget1\ttarget2\n");
	for(size_t i = 0; i < size; i++)	// using size_t instead of int to avoid warnings (used size_t for size of array)
		printf("%.1f\t%.1f\t%.1f\n", source[i], target1[i], target2[i]);

	return 0;
}

void copy_arr(double source[], double target[], size_t size)
{
	for(int i = 0; i < size; i++)
		target[i] = source[i];
}

void copy_ptr(double *src_ptr, double *target_ptr, size_t size)
{
	for(int i = 0; i < size; i++)
	{
		*target_ptr = *src_ptr;
		target_ptr++;
		src_ptr++;
	}
}
