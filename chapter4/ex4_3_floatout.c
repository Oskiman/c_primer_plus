// exercise 4.3
// program reads in a floating point number & prints it in
// decimal point and then scientific notation
#include <stdio.h>

int main(void)
{
	float input;
	printf("Enter a floating point number: ");
	scanf("%f", &input);
	printf("The input is %.1f %e\n", input, input);

	return 0;
}
