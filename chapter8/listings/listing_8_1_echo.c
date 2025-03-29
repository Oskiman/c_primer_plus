// lisitng 8.1
// echo.c - repeats input

#include <stdio.h>

int main(void)
{
	char ch;
    
    while((ch = getchar()) != '#')
        putchar(ch);
	return 0;
}
