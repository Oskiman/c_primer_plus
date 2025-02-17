// C Primer Plus
// Chapter 4 Char. strings and formatted input/output
// Listing 4.3 praise2.c

#include <stdio.h>
#include <string.h>

#define PRAISE "What a super, marvellous name!"

int main(void)
{
	char name[40];

	printf("Wnat's your name?\n");
	scanf("%s", &name);

	printf("Hello %s. %s\n", name, PRAISE);
	printf("Your name of %d letters occupies %d memory cells.\n", strlen(name), sizeof name);
	printf("The phrase of praise has %d letters ", strlen(PRAISE));
	printf("and occupies %d memory cells.\n", sizeof PRAISE);

	return 0;
}
