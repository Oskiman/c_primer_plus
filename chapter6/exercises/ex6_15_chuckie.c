// Exercise 6.15
// $1,000,000 is placed in an account that earns 8% a year
// on the last day of the year $100,000 is withdrawn
// How many years to empty the account?
#include <stdio.h>

int main(void)
{
	int years = 0;
	float initial_amount = 1000000;		//1 million
	float running_total = initial_amount;
	float interest = 0.08;
	int withdrawal = 100000;		// 100 thousand

	while(running_total > 0)
	{
		running_total += (initial_amount * interest);
		running_total -= withdrawal;
		years++;
	}

	printf("It took %d years to empty the account\n", years);

	return 0;
}
