// Program that asks for an ASCII code value
// and outputs the character with that code
// assume correct input
//
#include <stdio.h>

int main(void)
{
	int input = 0;
	printf("Please enter an ASCII value (0 - 127): ");
	scanf("%d", &input);

	printf("%c\n", input);

	return 0;
}
