// Exercise 6.4
// Program requests the user enter an uppercase letter.
// Use nested loops to produce a pyramid pattern like this.
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABDCEDCBA
//
// The pattern should extend to the character entered, for example, E.
// HINT: outer loop for rows
// 3 inner loops in a row, to handle spaces, ascending & descending order
#include <stdio.h>

int main(void)
{
	char letter;
	printf("Enter an uppercase letter: ");	// assume valid input
	scanf("%c", &letter);

	int rows = letter - 64;	// A = 65 in ASCII
	char alpha = 'A';
	int count = 1;

	for(int i = 0; i < rows; i++)
	{
		for(int j = 1; j < rows - i; j++)		// print spaces
		{
			printf(" ");

		}
		for(int k = 0; k <= (count / 2); k++)		// ascending letters
		{
			printf("%c", alpha++);
		}
		alpha = alpha - 2;	// decrement

		for(int l = 0; l < (count / 2); l++)		// descending letters
		{
			printf("%c", alpha--);
		}

		count = count + 2;		// increment count for next row
		alpha = 'A';			// reset alpha to 'A' for next row
		printf("\n");




	}

	return 0;
}
