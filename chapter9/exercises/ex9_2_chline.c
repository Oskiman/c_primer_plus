// Exercise 9.2
// Devise a function chline(ch, i, j) that prints the requested character
// in columns i through j.  Test it in a simple driver
#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	char ch = '*';

	chline(ch, 1, 5);

	printf("\n");
	return 0;
}

void chline(char ch, int i, int j)
{
	int column;
	for (column = 1; column < i; column++)
	{
		putchar(' ');
	}

	for (; column <= j; column++)
	{
		putchar(ch);
	}
}
