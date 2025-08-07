// Exercise 11.1
// Design and test a function that fetches the next n characters
// from input, including blanks, tabs and newlines

#include <stdio.h>
#include <string.h>

char* next_n_chars(int size, char* array);
void next_n_chars_B(int num_chars, char *argv[]);


int main(int argc, char* argv[])
{
	
	if(argc < 2)
	{
		printf("Usage: ./prog_name input\n");
		return -1;
	}

	// use argc to determine no. of args passed
	// use strlen(argv[i]) for each argument
	// TODO: need to take whitespace into account
	size_t total_length = 0;
	for(int i = 1; i < argc; i++)	// start at 1 to avoid counting program name
	{
		total_length += strlen(argv[i]);
	}

	printf("Total length: %ld\n", total_length);
		
	int num_chars = 0;
	printf("How many characters?: ");
	scanf("%d", &num_chars);
	next_n_chars_B(num_chars, argv);

	return 0;
}

// function just outputs first letter of each argv
void next_n_chars_B(int num_chars, char *argv[])
{
	char *ch;

	for(int i = 0; i < num_chars; i++)
	{
		ch = argv[i];
		printf("%c", *ch);
	}

	printf("\n");
}

char* next_n_chars(int size, char* array)
{
	char ch;

	for(int i = 0; i < size; i++)
	{
		if((ch = getchar()) == EOF)	// we have reached the end of the file (obvs!)
			break;			// so exit the loop

		*(array + i) = ch;		// otherwise copy the current char into array
	}

	return array;
}
