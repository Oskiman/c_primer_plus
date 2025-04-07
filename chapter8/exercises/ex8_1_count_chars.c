// Exercise 8.1
// Program counts the number of characters in input until EOF
// CTRL-D after pressing return, apparently
#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;
	printf("Enter some input: ");
	
	while((ch = getchar()) != EOF)
	{
		count++;
	}

	printf("%d\n", count);

	return 0;
}
