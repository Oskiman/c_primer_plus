// Ch. 5 Ex. 6
// program requests a float & prints the value
// of that number cubed
// use a function of your own design to cube the value
// and output it
// main() should pass the entered value to this function
#include <stdio.h>

float float_cubed(float num);

int main(void)
{
	float input = 0.0;
	printf("Enter a floating point number: ");
	scanf("%f", &input);
	printf("%.2f cubed is %.2f\n", input, float_cubed(input));

	return 0;
}

float float_cubed(float num)
{
	//float cubed = num;
	
	return num * num *num;
}
