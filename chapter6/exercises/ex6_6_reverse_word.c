// Exercise 6.6
// Write a program that reads a single word into a character array
// and then prints the word backward.  Hint. Use strlen() to compute 
// the index of the last character in the array
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *word_array;
	printf("Enter a word: ");	// assume valid input
	scanf("%s", word_array);
	int length = strlen(word_array);
	for(int i = length; i >= 0; i--)
	{
		printf("%c", word_array[i]);
	}

	printf("\n");

	return 0;
}
