// Exercise 9.6 
// Write a program that reads characters from the standard input
// to end-of-file.  For each character, have the program report
// whether it is a letter.  If it is a letter, also report its
// numerical location in the alphabet.  For example, c and C
// would each be letter 3.  Incorporate a function that takes a
// character as an argument and returns the numerical location
// if the character is a letter and that returns -1 otherwise.
#include<ctype.h>
#include <stdio.h>

int char_check(char ch);

int main(void)
{
	char ch;
	while((ch = getchar()) != '\n' && ch != EOF)
	{
		int result = char_check(ch);
		if(result > -1)
			printf("%c is %d in the alphabet.\n", ch, result);
		else
			printf("%c is not in the alphabet.\n", ch);
	}

	return 0;
}

int char_check(char ch)
{
	if(isalpha(ch) == 0)
		return -1;
	else
		ch = tolower(ch);
		return ch - 96;
}
