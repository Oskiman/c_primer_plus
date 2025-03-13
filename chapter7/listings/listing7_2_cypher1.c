// cypher.c - alters input, preserving spaces
#include <stdio.h>

#define SPACE ' '

int main(void)
{
	char ch;

	ch = getchar();			// read a character
	while(ch != '\n')		// while not end of line
	{
		if(ch == SPACE)
			putchar(ch);	// leave the space character unchanged
		else
			putchar(ch + 1);// change other characters
		ch = getchar();		// get next character
	}

	printf("\n");

	return 0;
}
