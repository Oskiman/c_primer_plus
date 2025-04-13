// Exercise 8.6
// Modify the get_first() function from listing 8.8 so that
// it returns the first non-whitespace character encountered
#include <stdio.h>
#include <ctype.h>	// for isspace()

char get_first(void);

int main(void)
{
	printf("%c\n", get_first());	

	return 0;
}

char get_first(void)
{
    int ch;
    do{
    ch = getchar();
	
    }while(isspace(ch));


    while(getchar() != '\n')
        continue;	// dispose of rest of line
    return ch;
}

