// Exercise 8.4
// Reads input in a stream of characters until EOF
// Output the average number of letters per word
// Don't count whitespace or punctutation as a letter
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int count_words = 0;
	int count_letters = 0;
	printf("Enter some input: ");
	
	while((ch = getchar()) != EOF)
	{
		if(ch == ' ' || ch == '\t' || ch == '\n')
			count_words++;
		else if(isalnum(ch))
			count_letters++;
	}

	printf("Average number of letters per word is: %d\n", count_letters/count_words);
	return 0;
}
