// Exercise 9.4
// The harmonic mean of two numbers is obtained by taking the
// inverses of the two numbers, averaging them and taking the
// inverse of the result.  Write a function that takes two
// double arguments and returns the harmonic mean of the two numbers.
#include <stdio.h>

double harmonic(double num1, double num2);

int main(void)
{
	double num1, num2;
	printf("Enter two numbers: ");	// assume valid input
	scanf("%lf %lf", &num1, &num2);

	printf("The harmonic mean of %.2lf and %.2lf is %lf\n", num1, num2, harmonic(num1, num2));
	return 0;
}

double harmonic(double num1, double num2)
{
	// formula taken from the following:
	// https://www.omnicalculator.com/math/harmonic-mean#harmonic-average-of-two-or-three-numbers
	return 2 * num1 * num2 / (num1 + num2);
}
