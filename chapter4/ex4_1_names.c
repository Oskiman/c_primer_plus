// exercise 4.1
// Write a program that asks for your first name, last name and then
// prints the names in the format last, first
#include <stdio.h>

int main(void)
{
	// arbitrary array sizes
	char first_name[10];
	char last_name[20];

	// assume valid input
	printf("Enter your first name: ");
	scanf("%s", first_name);	// we don't need & here
	printf("Enter your second name: ");
	scanf("%s", last_name);		// or here!

	printf("%s %s\n", last_name, first_name);

	return 0;
}
