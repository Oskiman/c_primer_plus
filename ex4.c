#include <stdio.h>

void jolly_good(void);
void and_so(void);

int main(void)
{

	jolly_good();
	jolly_good();
	jolly_good();
	and_so();

	return 0;
}

void jolly_good(void)
{
	printf("For he's a jolly good fellow!\n");
}

void and_so(void)
{
	printf("Which nobody can deny!\n");
}
