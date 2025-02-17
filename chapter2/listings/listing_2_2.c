// Listing 2.2 the fathm_ft.c program

#include <stdio.h>

int main(void)
{
	int feet, fathoms;

	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet in %d fathoms\n", feet, fathoms);

	return 0;
}
