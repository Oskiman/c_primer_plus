// Exercise 11.1
// Design and test a function that fetches the next n characters
// from input including blanks, tabs and newlines
#include <stdio.h>
#include <stdlib.h>

void next_n_chars(int length, char input[]);

int main(void)
{
	size_t MAXLENGTH = 80;
	int num_chars = 0;
	char *input;

	input = (char*)malloc(MAXLENGTH * sizeof(char));

	printf("Enter a sentence (less than 80 characters please!): ");
	getline(&input, &MAXLENGTH, stdin);
	printf("Enter number of characters to fetch: ");
	scanf("%d", &num_chars);

	next_n_chars(num_chars, input);

	free(input);

	printf("\n");

	return 0;
}

void next_n_chars(int length, char input[])
{
	for(int i = 0; i < length; i++)
	{
		putchar(input[i]);
	}
}

