// exercise 4.4
// program asks for height in inches & name and outputs:
// name, you are 6.203 feet tall
// use type float, and / for division
#include <stdio.h>

int main(void)
{
	float height_in_inches;
	int inches_per_foot = 12;
	char name[10];
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter your height in inches: ");
	scanf("%f", &height_in_inches);
	printf("%s, you are %.3f feet tall\n", name, height_in_inches / inches_per_foot); 

	return 0;
}
