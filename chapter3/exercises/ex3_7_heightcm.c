// C Primer Plus
// Chapter 3 Data & C
// Exercise 3.7
// Program that asks for height in inches & outputs centimetres
// 2.54 centimetres to 1 inch
#include <stdio.h>

int main(void)
{
	float one_inch = 2.54;		// 2.54 cm to 1 inch
	float input_height = 0.0;
	printf("Enter your height in inches: ");
	scanf("%f", &input_height);
	printf("%.2f inches is equivalent to %.2f centimetres\n", input_height, input_height * one_inch);

	return 0;
}
