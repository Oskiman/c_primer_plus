// Exercise 9.8
// Redo exercise 9.7 but this time use a recursive function
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
	
	int i = abs(power);
	if(i != 1)
		return num * powerup(num, power - 1);
	else
		return 1;

	if(power < 0)
		result = 1 / result;
	
	return result;
}


