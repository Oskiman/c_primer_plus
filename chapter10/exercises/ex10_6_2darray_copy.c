// exercise 10.6
// Write a program that initiliases a two-dimensional array of double
// and uses one of the copy functions from exercise 2 to copy it to
// a second two-dimensional array. (Because a two-dimensional array is
// an array of arrays, a one-dimensional copy function can be used
// with each sub array.)
#include <stdio.h>

void copy_ptr(double *src_ptr, double *target_ptr, size_t size);

#define ROWS 2
#define COLS 4

int main(void)
{
	double source[ROWS][COLS] = { {1.1, 2.2, 3.3, 4.4}, {5.5, 6.6, 7.7, 8.8} };
	double target[ROWS][COLS];
	size_t size = sizeof(source) / sizeof(source[0][0]);

	copy_ptr(source[0], target[0], size);
	
	for(int i = 0; i < ROWS; i++)
		for(int j = 0; j < COLS; j++)
			printf("%.1f ", target[i][j]);

	printf("\n");

	return 0;
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
