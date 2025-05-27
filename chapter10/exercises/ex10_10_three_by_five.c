// Exercise 10.10
// Write a program that declares a 3x5 array and initialises it to
// some values of your choice.  Have the program print the values, 
// double all the values and then display the new values.
// Write a function to do the displaying and a second function to
// do the doubling.  Have the functions take the array name and 
// the number of rows as arguments.
#include <stdio.h>

#define ROWS 3
#define COLS 5

void display_array(int array[][COLS], int rows);
void double_up(int array[][COLS], int rows);

int main(void)
{
	int array[ROWS][COLS] = {{1, 2, 3, 4, 5},
				{6, 7, 8, 9, 10},
				{11, 12, 13, 14, 15}};

	display_array(array, ROWS);
	double_up(array, ROWS);
	display_array(array, ROWS);

	return 0;
}

void display_array(int array[][COLS], int rows)
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			printf("%d ", array[i][j]);
		}
	}

	printf("\n");
}

void double_up(int array[][COLS], int rows)
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			array[i][j] = (array[i][j] * 2);
		}
	}
}
