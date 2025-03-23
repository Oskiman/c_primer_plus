// Exercise 7.6
// Write a program the reads input up to '#' and
// reports the number of times the sequence 'ei' occurs.
// Note: The program will have to 'remember' the preceding
// as well as the current character
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	bool prev_e = false;	// this gets set to true if previous char is 'e' so we 'remember' 
	int num_sequence = 0;

	printf("Enter input (finish with '#'):\n ");	// without the '\n' the count wasn't working

	while((ch = getchar()) != '#');
	{
		ch = tolower(ch);	// so all chars are lower case, makes checking easier
		if(ch == 'e')
			prev_e = true;	// ch is 'e' so set flag to true, 'remembering' the previous char
		else if(ch == 'i')	// if ch is 'i', check if the previous char is 'e'
		{
			if(prev_e)
				num_sequence++;		// we have an 'ei' sequence so add one to count

			prev_e = false;			// reset flag to false, ready for next iteration
		}
		else
			prev_e = false;			// current char != 'i' so reset flag to false, ready for next iteration
		
		
	}

	printf("The sequence 'ei' appeared %d times.\n", num_sequence);

	return 0;
}
