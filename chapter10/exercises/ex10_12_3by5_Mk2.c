// Exercise 10.12
// Write a program that prompts the user to enter three sets of 
// five double numbers each.  The program should accomplish all
// of the following:
// a.	Store the information in a 3 x 5 array
// b.	Compute the average of each set of five values
// c. 	Compute the average of all the values
// d.	Determine the largest value of the 15 values
// e.	Report the resuts
// Each major task should be handled by a separate function using the
// traditional C approach to handling arrays. Accomplish task b by
// using a function that computes and returns the average of a one
// dimensional array, use a loop to call this function three times.
// The other tasks should take the entire array as an argument, and 
// the functions performing tasks c and d should return the answer
// to the calling program. (function?)
#include <stdio.h>

#define ROWS 3
#define COLS 5

double average_five(double array[COLS]);
double average_all(double array[][COLS], int rows);
double largest(double array[][COLS], int rows);
void output_results(double av5_1, double av5_2, double av5_3, double av_all, double largest);


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

	printf("The largest number was:\t%.2lf\n", largest(arrayr3c5, ROWS));
	printf("The average of all was:\t%.2lf\n", average_all(arrayr3c5, ROWS));
	
	for(int i = 0; i < ROWS; i++)
	{
		printf("The average of row %d was: %.2lf\n", i, average_five(arrayr3c5[i]));
	}

	return 0;
}

double average_five(double array[COLS])
{
	double sum = 0.0;
	for(int i = 0; i < COLS; i++)
	{
		sum += array[i];
	}

	return sum / COLS;
}

double average_all(double array[][COLS], int rows)
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

double largest(double array[][COLS], int rows)
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

void output_results(double av5_1, double av5_2, double av5_3, double av_all, double largest)
{

}
