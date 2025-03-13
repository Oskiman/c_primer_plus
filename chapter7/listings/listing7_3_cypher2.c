// cypher2.c - alters input - preserving non-letters
#include <stdio.h>
#include <ctype.h>	// for isalpha()

int main(void)
{
	char ch;

	while((ch = getchar()) != '\n')
	{
		if(isalpha(ch))			// if a letter
			putchar(ch + 1);	// change it
		else
			putchar(ch);
	}

	putchar(ch);

	return 0;
}
