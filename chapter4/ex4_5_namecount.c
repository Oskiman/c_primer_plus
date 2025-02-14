// exercise 4.5
// program requests user's first name then last name
// output names on one line & number of letters in each
// name on the following line
// align letter count with end & then beginning of names
#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_name[10];
	char last_name[20];
	printf("Enter first & last name: ");
	scanf("%s %s", first_name, last_name);
	int length_first = strlen(first_name);
	int length_last = strlen(last_name);
	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", length_first, length_first, length_last, length_last);
	printf("%s %s\n", first_name, last_name);
	printf("%-*d %-*d\n", length_first, length_first, length_last, length_last);

	return 0;
}
