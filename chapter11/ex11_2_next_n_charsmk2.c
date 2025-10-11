// Exercise 11.2
// Modify and test the function in exercise 1 so that it stops
// after n characters or after the first blank, tab or newline, 
// whichever comes first.

#include <stdio.h>
#include <stdlib.h>

char* next_n_chars(int length, char input[]);

int main(void)
{
	size_t MAXLENGTH = 80;
	int num_chars = 0;
	char *input;

	input = (char*)malloc(MAXLENGTH * sizeof(char));

	if(input == NULL)
	{
		printf("Unable to allocate memory.\n");
		exit(1);
	}
	printf("Enter a sentence (less than 80 characters please!): ");
	getline(&input, &MAXLENGTH, stdin);
	printf("Enter number of characters to fetch: ");
	scanf("%d", &num_chars);

	printf("%s\n", next_n_chars(num_chars, input));

	free(input);

	printf("\n");

	return 0;
}

char* next_n_chars(int length, char input[])
{
	char* new_array;
	new_array = (char*)malloc(length * sizeof(char));
	for(int i = 0; i < length; i++)
	{
		if(input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
			return new_array;
		else
			new_array[i] = input[i];
	}

	return new_array;
}

