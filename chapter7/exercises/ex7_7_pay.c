// Exercise 7.7
// Write a program that requests the hours worked in a week
// then prints the gross pay, the taxes and the net pay.
// Assume the following:
// a. Basic pay rate $10.00/hr
// b. Overtime (in excess of 40 hours) time and a half
// c. tax rate	15% of the first $300
// 		20% of the next $150
// 		25% of the rest
// Use #defined constants

#include <stdio.h>
#include <stdbool.h>

#define TAX_300 0.15
#define TAX_301_450 0.20
#define TAX_451 0.25
#define WEEK 40
#define WAGE_300 300
#define WAGE_301_450 450
#define WAGE_451 451
#define OVERTIME 15.0
#define STANDARD_RATE 10.0


int main(void)
{
	float hours_worked = 0.0;
	float gross_pay = 0.0;
	float net_pay = 0.0;
	float tax_paid = 0.0;

	printf("How many hours?: ");
	scanf("%f", &hours_worked);

	if(hours_worked <= WEEK)		// less than or equal to 40 hours worked
		gross_pay = hours_worked * STANDARD_RATE;
		
	else if (hours_worked > WEEK)		// more than 40 hours worked
		gross_pay = (STANDARD_RATE * WEEK) + ((hours_worked - WEEK) * OVERTIME);
	
	// calculate tax & net pay
	if(gross_pay <= WAGE_300)
	{
		tax_paid = (gross_pay * TAX_300);
		net_pay = gross_pay - tax_paid; 
	}
	else if(gross_pay > WAGE_300 && gross_pay <= WAGE_301_450)
	{
		tax_paid = (gross_pay * TAX_301_450);
		net_pay = gross_pay - tax_paid;
	}
	else
	{
		tax_paid = (gross_pay * TAX_451);
		net_pay = gross_pay - tax_paid;
	}	

	printf("hours worked: %.2f, gross pay: %.2f, tax paid: %.2f, net pay: %.2f\n", hours_worked, gross_pay, tax_paid, net_pay);
	
	return 0;
}

