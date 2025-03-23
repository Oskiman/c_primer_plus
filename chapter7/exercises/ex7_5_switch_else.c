// Exercise 7.5
// Redo exercise 4 using a switch statement
// NOTE: The book says redo exercise 3, I assume this is a mistake because
// there is nowhere for a switch to be used
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
		switch(ch)
		{
			case '.':
				putchar('!');
				num_subs++;
				break;

			case '!':
				putchar('!');
				putchar('!');
				num_subs++;
				break;

			default:
				putchar(ch);
		}
		//if(ch == '.')
		//{
		//	putchar('!');
		//	num_subs++;
		//}
		//else if(ch == '!')
		//{
		//	putchar('!');
		//	putchar('!');
		//	num_subs++;
		//}
		//else
		//{
		//	putchar(ch);
		//}
	}

	printf("\n%d subsitutions made.\n", num_subs);

	return 0;
}
