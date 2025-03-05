// Exercise 6.3
// Use nested loops to produce the following pattern
// F
// FE
// FED
// FEDC
// FEDCB
// FEDCBA
#include <stdio.h>

int main(void)
{
	int rows = 6;
	int i, j;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%c", 'F' - j);
		}

		j = 0;
		printf("\n");
	}

	return 0;
}
