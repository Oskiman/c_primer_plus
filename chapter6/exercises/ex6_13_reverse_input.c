// Exercise 6.13
// Program reads in a line of input & prints it in reverse order
// Store input in an array of char, assume line no longer than 255
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *input;
	printf("Enter a line of 255 characters or less: ");
	scanf("%[^\n]s", input);	// [^\n] means "accept all characters except for \n" so we can allow spaces
	int length = strlen(input);
	printf("%d\n", length);
	for(int i = length; i >= 0; i--)
		printf("%c", input[i]);
	printf("\n");

	return 0;
}
