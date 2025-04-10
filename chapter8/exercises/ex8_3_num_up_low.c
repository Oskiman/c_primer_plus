// exercise 8.3
// Program reads input as a stream of characters until encountering EOF
// Have it report the number of uppercase and lowercase letters in the input
// Assume numerical values for uppercase and lowercase are sequential
#include <ctype.h>	// for isupper() and islower() functions
#include <stdio.h>

int main(void)
{
	char ch;
	int count_upper = 0;
	int count_lower = 0;

	while((ch = getchar()) != EOF)
	{
		if(isupper(ch))
			count_upper++;
		else if(islower(ch))
			count_lower++;
	}

	printf("There were %d uppercase characters & %d lowercase characters.\n", count_upper, count_lower);

	return 0;
}
