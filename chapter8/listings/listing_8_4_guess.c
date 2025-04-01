// guess.c - an inefficient and faulty guessing game
#include <stdio.h>

int main(void)
{
	int guess = 1;
	char response;

	printf("Pick an integer from 1 to 100.  I will try to guess it.\n");
	printf("Respond with a y if my guess is right and with n if it is wrong.\n");
	printf("Uh.. is your number %d?\n", guess);
	while((response = getchar()) != 'y')
		printf("Well, then, is it %d?\n", ++guess);

	printf("I knew I could do it.\n");

	return 0;
}
