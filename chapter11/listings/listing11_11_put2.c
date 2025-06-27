// put2.c - prints a string and counts characters
#include <stdio.h>

int put2(const char* string)
{
	int count = 0;
	while(*string != '\0')
	{
		putchar(*string++);
		count++;
	}

	putchar('\n');
	return count;
}
