// Chapter 11 Exercise 5
// Write a function is_within() that takes a character
// and a string pointer as its two function parameters.
// Have the function return a nonzero value (true) if
// the character is in the string and zero (false) otherwise.
// Test the function in a complete program that uses a loop
// to provide input values for feeding to the function
#include <stdio.h>
#include <stdlib.h>

int is_within(char c, char* string);

int main(void)
{
	size_t MAXLENGTH = 80;
	char* input;
	char char_to_find;

	input = (char*)malloc(MAXLENGTH * sizeof(char));

	if(input == NULL)
	{
		printf("Unable to allocate memory\n");
		exit(1);
	}

	
	printf("Enter a string (maximum 80 characters, blank line to quit): ");
	getline(&input, &MAXLENGTH, stdin);

	while(input[0] != '\n')
	{
		printf("Enter character to search for in string: ");
		char_to_find = getchar();
		printf("%d\n", is_within(char_to_find, input));
		
		while((getchar()) != '\n');
		
		printf("Enter a string (maximum 80 characters, blank line to quit): ");
		getline(&input, &MAXLENGTH, stdin);
	}

	free(input);
	return 0;
}

int is_within(char c, char* string)
{
	while(*string != '\0')
	{
		if(*string == c)
			return 99;

		string++;
	}

	return 0;
}
