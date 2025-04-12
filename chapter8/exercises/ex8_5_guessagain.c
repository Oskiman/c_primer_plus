// Exercise 8.5
// Modify listing 8.4 to use a more 'intelligent' strategy, for example
// intially guess '50' & ask higher or lower or correct
// If the guess is low, the next guess should be halfway between 50 & 100 etc.
// Basically use a binary search strategy
#include <stdio.h>

int main(void)
{
	int high = 100;
	int guess = 50;		// first guess is in the middle between 0 - 100
	int low = 0;
	char response;
	bool correct = false;
	printf("Pick an integer from 1 to 100.  I will try to guess it.\n");
	printf("Respond with a 'c' if my guess is correct, an 'h' if it is too high and an 'l' if it is too low.\n");
	printf("Uh.. is your number %d?\n", guess);
		
	while((response = getchar()) != 'c')
	{
		while((getchar()) != '\n')	// clear rest of input stream (this bit did my head in!)
		printf("Was my guess (h)igh, (l)ow or (c)orrect?: ");
		if(response == 'h')	// guess is too high
		{
			high = guess;
		}
		else 	// guess is too low
		{
			low = guess;
		}

		guess = (high + low) / 2;	// new guess

		printf("My next guess is: %d\n", guess);
	}
	printf("I knew I could do it.\n");

	return 0;
}
