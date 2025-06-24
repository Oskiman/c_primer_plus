// name1.c - reads a name
#include <stdio.h>

#define MAX 81

int main(void)
{
	char name[MAX];
	printf("Hi, what's your name?\n");
	gets(name);	// place string into name array
	printf("Nice name, %s.\n", name);

	return 0;
}
