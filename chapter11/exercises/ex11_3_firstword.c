// Exercise 3
// Design and test a function that fetches the first word 
// from a line of input and discards the rest of the line.
// Define a word as a sequence of characters with no
// blanks, tabs or newlines in it.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* first_word(char input[], int length);

int main(void)
{
	size_t MAXLENGTH = 80;		// max length of input
	char* input;

	input = (char*)malloc(MAXLENGTH * sizeof(char));

	if(input == NULL)
	{
		printf("Unable to allocate memory.\n");
		exit(1);
	}

	printf("Enter a sentence (less than 80 characters please!: ");
	getline(&input, &MAXLENGTH, stdin);
	int length = strlen(input);
	printf("%s\n", first_word(input, length));
	
	free(input);

	printf("\n");


	return 0;
}

char* first_word(char input[], int length)
{
	char* first_word;
	first_word = (char*)malloc(length * sizeof(char));
	for(int i = 0; i < length; i++)
	{
		if(input[i] == ' ')	// we have hit a space so return
			return first_word;
		else
			first_word[i] = input[i];
	}

	return first_word;	// no spaces
}
