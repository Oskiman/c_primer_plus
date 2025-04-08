// Exercise 8.2
// Program prints each input character and its ASCII value
// if newline or tab, print '\n' or '\t' or use CTRL character notation
// for other non printing characters
// For example, ASCII 1 is Ctrl+A which can be displayed as ^A
// NOTE: ASCII value for A is the value for Ctrl+A plus 64
// A similar relation holds for other nonprinting characters
// Print ten pairs per line except start a fresh line each time
// a newline character is encountered
#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;		// to keep track of number of lines, we print a newline every 10, unless one appears in the input
	printf("Enter some input: ");
	
	while((ch = getchar()) != EOF)
	{
		if(ch == '\n')
		{
			printf("\'\\n\': %d", ch);
		}
		else if(ch == '\t')
			printf("\'\\t\': %d", ch);
		else if(ch == ' ')
			printf("'\%c\': %d", ch, ch);
		else
		{
			printf("\'^%c\': %d", ch + 64, ch );	// ascii control chars
		}
		count++;
		if(count == 10)
			printf("\n");
		else
			printf(" ");
	}

	printf("\n");

	return 0;
}
