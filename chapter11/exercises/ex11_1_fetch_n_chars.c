// Exercise 11.1
// Design and test a function that fetches the next n characters
// from input, including blanks, tabs and newlines

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* next_n_chars(int size, char *array[]);

int main(int argc, char* argv[])
{
	
	if(argc < 2)
	{
		printf("Usage: ./prog_name input\n");
		return -1;
	}

	int num_chars = 0;
	printf("How many characters?: ");
	scanf("%d", &num_chars);
	next_n_chars(num_chars, argv);
	return 0;
}

char* next_n_chars(int size, char* array[])
{
	char ch;

	for(int i = 0; i < size; i++)
	{
		if((ch = getchar()) == EOF)	// we have reached the end of the file (obvs!)
		{
			array[i] = '\0';	// add null character
			break;			// exit the loop
		}

		//*(array + i) = ch;		// otherwise copy the current char into array
		array[i] = ch;
	}
	
	return *array;
}
