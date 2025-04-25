// Exercise 9.1
// Devise a function min(x, y) that returns the smaller of two double values
// and test the function with a simple driver
#include <stdio.h>

double min(double x, double y);

int main(void)
{
	double num1 = 25.67;
	double num2 = 33.45;

	printf("%.2lf\n", min(num1, num2));

	return 0;
}

double min(double x, double y)
{
	if(x < y)
		return x;
	else
		return y;
}
