// electric.c - calculates electric bill
#include <stdio.h>

#define RATE1 0.11439		// rate for first 240kwh
#define RATE2 0.12032		// rate for next 300kwh
#define RATE3 0.14022		// rate for over 540kwh
#define BREAK1 240.0		// first breakpoint for rates
#define BREAK2 540.0		// second breakpoint for rates
#define BASE1 (RATE1 * BREAK1)	// cost for 240kwh
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))	// cost for 540kwh

int main(void)
{
	double kwh;
	double bill;

	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);

	if(kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if(kwh <= BREAK2)	// kwh between 240 and 540
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else
		bill = BASE2 + (RATE3 * (kwh - BREAK2));

	printf("The charge for %.lf kwh is $%1.2f.\n", kwh, bill);


	return 0;
}
