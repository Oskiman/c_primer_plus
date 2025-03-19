// Exercise 7.1
// program reads input until '#' then prints
// the number of spaces read, number of newlines and
// number of all other characters read.
#include <stdio.h>

int main(void)
{
	int num_spaces = 0;
	int num_newlines = 0;
	int num_others = 0;
	char ch;

	printf("Enter some input.\n");
	while((ch = getchar()) != '#')
	{
		if(ch == ' ')
			num_spaces++;
		else if(ch == '\n')
			num_newlines++;
		else
			num_others++;	// all other characters
	}

	printf("spaces: %d, newlines: %d, all other characters: %d\n", num_spaces, num_newlines, num_others);
	
	return 0;
}
