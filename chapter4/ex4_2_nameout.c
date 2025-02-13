// exercise 4.2
// Write a program that requests your first name & does the following:
// a. prints it in enclosed double quotes
// b. prints it in a field 20 chars wide, with the whole field in quotes
// c. prints it at the left end of a field 20 chars wide, enclose the whole field in quotes
// d. prints it in a field 3 characters wider than the name
#include <stdio.h>

int main(void)
{
	char first_name[10];
	printf("Enter your first name: ");
	scanf("%s", first_name);

	// print in enclosed double quotes
	printf("\"%s\"\n", first_name);

	// print in 20 char wide field, enclosed in quotes
	printf("\"%20s\"\n", first_name);

	// print at left end of 20 char wide field
	printf("\"%-20s\"\n", first_name);

	// print in a field 3 larger than the name
	printf("\"%s   \"\n", first_name);

	return 0;
}
