// Exercise 4
// Design and test a function that searches the string specified
// by the first function parameter for the first occurence of a
// character specified by the second function parameter.  Have the
// function return a pointer to the character if successful and 
// null if the character is not found in the string. Test the function 
// in a complete program that uses a loop to provide input values
// for feeding to the function.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* return_first_char(char* string, char first_char);

int main(void)
{
	size_t MAXLENGTH = 80;
	int quit_flag = 0;		// to break out of loop
	char* input;
	char char_to_find;
	char* returned_char;

	input = (char*)malloc(MAXLENGTH * sizeof(char));

	if(input == NULL)
	{
		printf("Unable to allocate memory.\n");
		exit(1);
	}

	//TODO: change while loop to break out if empty line is input ('\n')
	//TODO: change loop to remove duplicate flush input stream
	//TODO: move initial printf & getline outside of loop
	//TODO: add another printf & getline to end of loop asking for input
	// to facilitate breaking out of loop with empty line
	//TODO: remove quit y/n block
	while(quit_flag == 0)
	{
		printf("Enter a string (maximum 80 characters please!): ");
		getline(&input, &MAXLENGTH, stdin);
		printf("Enter character to search for in string: ");
		char_to_find = getchar();
		char* first_char = return_first_char(input, char_to_find);
		if(first_char == NULL)
			printf("Character not found.\n");
		else	
			printf("Character %c found at position %lu\n", *first_char, first_char - input);	
		
		// flush input stream
		while ((getchar()) != '\n');

		char quit;
		printf("Quit? Y/N:");
		quit = getchar();
		if(quit == 'Y' || quit == 'y')
			quit_flag = 1;

		// flush input stream again
		while((getchar()) != '\n');
	}

	free(input);

	return 0;
}

char* return_first_char(char* string, char first_char)
{
	while(*string != '\0')
	{
		if(*string == first_char)
			return string;

		string++;
	}

	return NULL;
}
