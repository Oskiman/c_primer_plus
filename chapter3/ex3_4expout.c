// C Primer Plus
// Chapter 3
// Exercise 3.4
// Program reads in a floating point number & outputs it first in decimal point notation
// then in exponential notation
// "The input is 21.290000 or 2.129000e+001."
#include <stdio.h>

int main(void)
{
	float input = 0.0;
	printf("Enter a floating point number: ");
	scanf("%f", &input);
	printf("The input is %f or %e\n", input, input);


	return 0;
}
