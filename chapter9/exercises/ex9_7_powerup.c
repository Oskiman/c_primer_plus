// Exercise 9.7
// Chapter 6, Listing 6.20 shows a power() function that returned
// the result of raising a type double number to a positive
// integer value.  Improve the function so that it correctly
// handles negative powers.  Also, build into the function
// that 0 to any power is 0 and that any number to the 0th power is 1
// Use a loop.  Test the function in a program
#include <stdlib.h>
#include <stdio.h>

double powerup(double num, int power);

int main(void)
{
	double num;
	double result;
	int power;

	printf("Enter a number & a power to raise it to: ");
	while(scanf("%lf %d", &num, &power) == 2)
	{
		result = powerup(num, power);
		printf("%f to the %d power is %f\n", num, power, result);
		printf("Enter a number & a power to raise it to: ");
	}

	return 0;
}

double powerup(double num, int power)
{
	double result = num;	 
	
	if(num == 0)
	{
		printf("0 to any power is 0.\n");
		return 0;
	}
	else if(power == 0)
	{
		printf("Any number to the 0th power is 1.\n");
		return 1;
	}
	
	for(int i = 1; i < abs(power); i++)	// abs() returns the absolute(positive) value of a number
		result *= num;

	if(power < 0)
		result = 1 / result;
	
	return result;
}
