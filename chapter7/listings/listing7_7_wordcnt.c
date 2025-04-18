// wordcnt.c - counts characters, words, lines
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void)
{
	char c;		// read in character
	char prev;	// previous character read
	long n_chars = 0L;	// number of characters
	int n_lines = 0;	// number of lines
	int n_words = 0;	// number of words
	int p_lines = 0;	// number of partial lines
	bool inword = false;	// true if c is in a word
	
	printf("Enter text to be analyzed (| to terminate): \n");
	prev = '\n';		// used to identify complete lines
	
	while((c = getchar()) != STOP)
	{
		n_chars++;	// count characters
		if(c == '\n')
			n_lines++;	// count lines

		// the commented out code below is copied from the book
		// but it doesnt work words always equals 0
		// and I can't figure out why so I bodged my own solution
		//if(!isspace && !inword)
		//{
		//	inword = true;	// starting a new word
		//	n_words++;	// count word
		//}
		if(c == ' ' || c == '\t' || c == '\n' && !inword)
		{
			inword = true;
			n_words++;
		}

		if(isspace && inword)
			inword = false;	// reached end of word
					
		prev = c;	// save character value
	}

	if(prev != '\n')
		p_lines = 1;

	printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);
	

	return 0;
}
