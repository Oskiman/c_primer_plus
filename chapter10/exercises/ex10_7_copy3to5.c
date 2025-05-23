// Exercise 10.7
// Use a copy function from exercise 2 to copy the third through fifth
// elements of a seven element array into a three element array.  The
// function itself need not be altered, just choose the right actual 
// arguments.  (The actual arguments need not be an array name and array size.
// They only have to be the address of an array element and a number of elements
// to be processed.)
#include <stdio.h>

void copy_arr(double source[], double target[], size_t size);
void copy_ptr(double *src_ptr, double *target_ptr, size_t size);

int main(void)
{
	double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[3];
	int size = 3;	// we are copying 3 elements
	double *src_ptr;
	double *target_ptr;
	src_ptr = &source[2];	// start pointer at element 3
	target_ptr = &target[0];

	copy_ptr(src_ptr, target_ptr, size);

	for(int i = 0; i < size; i++)
		printf("%.1lf ", target[i]);

	printf("\n");

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
