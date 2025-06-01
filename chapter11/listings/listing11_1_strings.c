// strings.c - stringing the user along
#include <stdio.h>

#define MSG "You must have many talents.  Tell me some."
#define LIM 5
#define LINELEN 81

int main(void)
{
	char name[LINELEN];
	char talents[LINELEN];
	int i;
	const char m1[41] = "Just limit yourself to one line's worth.";	// initialising a dimensioned char array, note [40] outputs odd extra chars
	const char m2[] = "If you can't think of anything, fake it.";	// letting the compiler compute the array size
	const char *m3 = "\nEnough about me, what's your name?";	// initialising a pointer
	const char *mytal[LIM] = {"Adding numbers swiftly", "Multiplying accurately", "Stashing data", "Following instructions to the letter",
		"Understanding the C language"};	// initialising an array of string pointers
	
	printf("Hi, I'm Clyde the computer. I have many talents.\n");
	printf("Let me tell you some of them.\n");
	printf("What were they? Ah, yes, here's a partial list.\n");

	for(i = 0; i < LIM; i++)
		puts(mytal[i]);	// print list of computer talents
	
	puts(m3);
	gets(name);

	printf("Well, %s, %s\n", name, MSG);
	printf("%s\n%s\n", m1, m2);

	gets(talents);
	puts("Lets see if I've got that list: ");
	puts(talents);
	printf("Thanks for the information, %s\n", name);


	return 0;
}
