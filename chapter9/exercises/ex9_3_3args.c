// Exercise 9.3
// Write a function that takes 3 arguments, a character and 2 integers.
// The character is to be printed.  The first integer specifies the
// number of times the character is to be printed on a line.  
// The second integer specifies the number of lines to be printed.
// Write a program that makes use of this function.
#include <stdio.h>

void three_args(char ch, int perline, int numlines);

int main(void)
{
	char ch;
	int perline = 0;
	int numlines = 0;

	printf("Enter a character to be printed: ");	// assume valid input for now
	ch = getchar();
	printf("Enter number of characters per line: ");
	scanf("%d", &perline);
	printf("Enter number of lines to print: ");
	scanf("%d", &numlines);

	three_args(ch, perline, numlines);

	return 0;
}

void three_args(char ch, int perline, int numlines)
{
	for(int i = 0; i < numlines; i++)	// lines
	{
		for(int j = 0; j < perline; j++)
		{
			putchar(ch);
		}
	
	printf("\n");
	}
}
