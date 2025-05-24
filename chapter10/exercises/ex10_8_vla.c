// Exercise 10.8
// Write a program that initialises a two-dimensional 3x5 array of double
// and uses a VLA based function to copy it to a second two-dimensional array.
// Also provide a VLA-based function to display the contents of the two arrays.
// The two functions should be capable, in general, of processing arbitrary
// N x M arrays
#include <stdio.h>

void copy_array(int rows, int cols, double source[rows][cols], double target[rows][cols]);
void display_array(int rows, int cols, double array[rows][cols]);

#define ROWS 3
#define COLS 5

int main(void)
{
	double source[ROWS][COLS] = {{1.1, 2.2, 3.3, 4.4, 5.5},
		{6.6, 7.7, 8.8, 9.9, 10.10}, {11.11, 12.12, 13.13, 14.14, 15.15}};

	double target[ROWS][COLS];
	display_array(ROWS, COLS, source);
	copy_array(ROWS, COLS, source, target);
	display_array(ROWS, COLS, target);

	return 0;
}

void copy_array(int rows, int cols, double source[rows][cols], double target[rows][cols])
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			target[i][j] = source[i][j];
		}
	}
}

void display_array(int rows, int cols, double array[rows][cols])
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			printf("%.2f ", array[i][j]);
		}	
	}

	printf("\n");
}
