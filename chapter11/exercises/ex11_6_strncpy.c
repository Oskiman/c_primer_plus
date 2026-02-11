// Chapter 11 Exercise 6
// The strncpy(s1, s2, n) function copies exactly n characters
// from s2 to s1, truncating s2 or padding it with extra null
// characters as necessary.  The target string may not be
// null-terminated if the length of s2 is n or more.  The 
// function returns s1.  Write your own version of this
// function.  Test the function in a complete program that
// uses a loop to provide input values for feeding to the function.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strncpy(char* dest, char* source, size_t length);

int main(void)
{
	size_t MAXLENGTH = 80;
	char* input;
	char* output;

	input = (char*)malloc(MAXLENGTH * sizeof(char));

	if(input == NULL)
	{
		printf("Unable to allocate memory.\n");
		exit(1);
	}

	printf("Enter a string (maximum 80 characters, blank line to quit): ");
	getline(&input, &MAXLENGTH, stdin);

	while(input[0] != '\n')
	{
		size_t chars_to_copy = 0;	
		printf("Number of chars to copy?: ");
		scanf("%lu", &chars_to_copy);
		output = (char*)malloc(chars_to_copy * sizeof(char));
		if(output == NULL)
		{
			printf("Unable to allocate memory.\n");
			exit(1);
		}

		my_strncpy(output, input, chars_to_copy);
		printf("Original: %s", input);
		printf("Output: %s\n", output);

		while((getchar()) != '\n');
		
		printf("Enter a string (maximum 80 characters, blank line to quit): ");
		getline(&input, &MAXLENGTH, stdin);
	}

	free(input);
	free(output);

	return 0;
}

char* my_strncpy(char* dest, char* source, size_t length)
{

	// loop to copy from source to dest
	size_t i = 0;
	while(source[i] != '\0' && i < length)
	{
		dest[i] = source[i];
		i++;
	}
	
	// if dest < length, pad with '\0'
	while (i < length)
	{
		dest[i] = '\0';
		i++;
	}
	
	return dest;
}
