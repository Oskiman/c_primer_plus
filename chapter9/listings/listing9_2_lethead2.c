// lethead2.c
#include <stdio.h>
#include <string.h>

#define NAME "MEGATHINK, INC."
#define ADDRESS "10 Megabuck Plaza"
#define PLACE "Megapolis CA 94904"
#define LIMIT 65
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
	int spaces;

	show_n_char('*', LIMIT);	// using constants as arguments
	putchar('\n');
	show_n_char(SPACE, 25);
	printf("%s\n", NAME);
	spaces = (65 - strlen(ADDRESS)) / 2;	// calculate number of spaces to skip
	show_n_char(SPACE, spaces);
	printf("%s\n", ADDRESS);
	show_n_char(SPACE, (65 - strlen(PLACE)) / 2);	// expression as argument
	printf("%s\n", PLACE);
	show_n_char('*', LIMIT);
	putchar('\n');

	return 0;
}

void show_n_char(char ch, int num)
{
	int count;

	for(count = 1; count <= num; count++)
	putchar(ch);
}	
