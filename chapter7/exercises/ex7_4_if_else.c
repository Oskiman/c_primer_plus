// Exercise 7.4
// using if else statements, write a program that reads input up to'#'
// replaces each period with an exclamation mark, replaces each exclamation mark
// initially present with two exclamation marks and reports at the end the number
// of substitutions it has made
#include <stdio.h>

int main(void)
{
	char ch;
	int num_subs = 0;
	printf("Enter some input: ");

	while((ch = getchar()) != '#')
	{
		if(ch == '.')
		{
			putchar('!');
			num_subs++;
		}
		else if(ch == '!')
		{
			putchar('!');
			putchar('!');
			num_subs++;
		}
		else
		{
			putchar(ch);
		}
	}

	printf("\n%d subsitutions made.\n", num_subs);

	return 0;
}
