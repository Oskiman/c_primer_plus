// Exercise 7.2
// program reads input until encountering '#'
// print each input character and it's ASCII decimal code
// print eight character-code pairs per line
// use a character count and the modulo operator '%'
// to print a newline character for every eight cycles of the loop
#include <stdio.h>

int main(void)
{
	char ch;	// for input
	int count = 0;

	printf("Enter some input.\n");
	while((ch = getchar()) != '#')
	{
		if(count % 8 == 0)
			printf("\n");	// newline every 8 cycles
		printf("%c\t%d", ch, ch);
		count++;
	}

	return 0;
}
