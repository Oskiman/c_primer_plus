// C Primer Plus
// Chapter 4 Char strings & formatted output
// Listing 4.1 talkback.c
#include <stdio.h>
#include <string.h>

#define DENSITY 62.4	// human density in lbs per cu. ft
			//
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi, what's your first name?\n");
	scanf("%s", &name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;

	printf("Well, %s, your volume is %2.2f cubic feet\n", name, volume);
	printf("Also, your first name has %d letters ", letters);
	printf("and we have %d bytes to store it in.\n", size);


	return 0;
}
