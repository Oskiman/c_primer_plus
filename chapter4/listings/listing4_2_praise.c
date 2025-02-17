// C Primer Plus
// Chapter 4 Char. strings and formatting input/output
// Listing 4.2 praise.c
// uses an assortment of strings
#include <stdio.h>

#define PRAISE "What a super marvellous name"

int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf("%s", &name);
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}
