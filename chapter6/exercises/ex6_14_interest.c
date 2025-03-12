// Exercise 6.14
// Daphne invests $100 at 10% simple interest (10% of original investment every year)
// Deirdrie invests $100 at 5% interest compounded annually (interest is 5% of current balance, including previously added interest)
// Write a program that finds how many years it takes for the value of Deirdrie's investment to
// exceed the value of Daphne's.  Also show the amounts at that time
#include <stdio.h>

int main(void)
{
	// constants for amounts of interest
	const float SIMPLE = 0.1;
	const float COMPOUND = 0.05;

	
	double initial_amount = 100;
	int years = 0;
	double Daphne = initial_amount;	// initialise both to 100
	double Deirdrie = initial_amount;
	
	while(Deirdrie <= Daphne)
	{
		Daphne += (initial_amount * SIMPLE);	
		Deirdrie += Deirdrie * COMPOUND;
		years++;
	}

	printf("It took %d years for Deirdrie to earn %.2lf while Daphne earnt %.2lf\n", years, Deirdrie, Daphne);
	
	return 0;
}
