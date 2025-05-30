// Exercise 10.13 
// Do exercise 10.12 but use variable length array function parameters
#include <stdio.h>

#define ROWS 3
#define COLS 5

double average_five(double *array, int cols);
double average_all(int rows, int cols, double array[ROWS][COLS]);
double largest(int rows, int cols, double array[ROWS][COLS]);

int main(void)
{
	double arrayr3c5[ROWS][COLS];
	double input = 0.0;

	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			printf("Enter a double: ");
			scanf("%lf", &input);
			arrayr3c5[i][j] = input;
		}
	}

	printf("The largest number was:\t%.2lf\n", largest(ROWS, COLS, arrayr3c5));
	printf("The average of all was:\t%.2lf\n", average_all(ROWS, COLS, arrayr3c5));
	
	for(int i = 0; i < ROWS; i++)
	{
		printf("The average of row %d was: %.2lf\n", i, average_five(arrayr3c5[i], COLS));
	}

	return 0;
}

double average_five(double *array, int cols)
{
	double sum = 0.0;
	for(int i = 0; i < COLS; i++)
	{
		sum += array[i];
	}

	return sum / COLS;
}

double average_all(int rows, int cols, double array[ROWS][COLS])
{
	double average_15 = 0.0;
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			average_15 += array[i][j];
		}
	}

	return average_15 / 15;		// todo get rid of magic number
}

double largest(int rows, int cols, double array[ROWS][COLS])
{
	double largest = 0.0;	// intialise, this will be set to the first element later
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			if(i == 0 && j == 0)	// set largest equal to first element (all elements could be negative)
			{
				largest = array[i][j];
			}
			else if(array[i][j] > largest)
			{
				largest = array[i][j];
			}

		}
	}

	return largest;
}



