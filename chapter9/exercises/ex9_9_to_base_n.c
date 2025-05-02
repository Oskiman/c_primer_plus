// Exercise 9.9
// Generalise the to_binary() function of listing 9.8 to a 
// to_base_n() function that takes a second argument in the
// range 2 - 10.  It then prints the number that is its first
// argument to the number base given by the second argument.
// For example, to_base_n(129, 8) would display 201, the base-8
// equivalent of 129.  Test the function in a complete program.

#include <stdio.h>

void to_base_n(int num, int base);

int main(void)
{
	int number;
	int base;

	printf("Enter a number and a base (q to quit):\n");
	while(scanf("%d %d", &number, &base) == 2)
	{
		printf("Base %d equivalent: ", base);
		to_base_n(number, base);
		putchar('\n');
		printf("Enter a number and a base (q to quit):\n");
	}

	printf("Done.\n");

	return 0;
}

void to_base_n(int num, int base)
{
	int r;

	r = num % base;
	if(num >= base)
		to_base_n(num / base, base);
	putchar('0' + r);

	return;
}
