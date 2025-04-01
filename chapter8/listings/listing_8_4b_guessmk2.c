// guess.c mk. 2- an inefficient and faulty guessing game
// with an improved while loop
#include <stdio.h>

int main(void)
{
	int guess = 1;
	char response;

	printf("Pick an integer from 1 to 100.  I will try to guess it.\n");
	printf("Respond with a y if my guess is right and with n if it is wrong.\n");
	printf("Uh.. is your number %d?\n", guess);
	while((response = getchar()) != 'y')
	{
		if(response == 'n')
			printf("Well, then, is it %d?\n", ++guess);
		else
			printf("Sorry, I understand only y or n.\n");

		while(getchar() != '\n')
			continue;	// skip rest of input line

	}
	printf("I knew I could do it.\n");

	return 0;
}
