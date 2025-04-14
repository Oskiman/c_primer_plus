// Exercise 8.7
// Modify exercise 8 from Chapter 7 so that the menu choices
// are labelled by characters instead of by numbers.
// Modify assumption a in exercise 7 so the program presents
// a menu of pay rates from which to choose. Use a switch to
// select the pay rate.  The proram should recycle until 5
// is entered.  If something other than 1 through 5 is entered
// the program should remind the user what the proper choices are
// and then recycle.  Use #defined constants

#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define TAX_300 0.15
#define TAX_301_450 0.20
#define TAX_451 0.25
#define WEEK 40
#define WAGE_300 300
#define WAGE_301_450 450
#define WAGE_451 451
#define RATE_1 8.75
#define RATE_2 9.33
#define RATE_3 10.00
#define RATE_4 11.20
#define OVERTIME 15.0

void print_menu();

int main(void)
{
	float hours_worked = 0.0;
	float gross_pay = 0.0;
	float taxes = 0.0;
	float net_pay = 0.0;
	float tax_paid = 0.0;
	float rate_pay = 0.0;
	char input;
	bool quit = false;

	print_menu();

	while(scanf("%c", &input) == 1) 	// while input is an integer, if not, quit
	{
		input = toupper(input);
		switch(input)
		{
			case 'A':	rate_pay = RATE_1;
					break;
			case 'B':	rate_pay = RATE_2;
					break;
			case 'C':	rate_pay = RATE_3;
					break;
			case 'D':	rate_pay = RATE_4;
					break;
			case 'Q':	quit = true;
					break;
			default:	print_menu();	// any other integer input, we simply ask again
					continue;
		}

		if(quit == true)
			break;

		printf("How many hours?: ");
		scanf("%f", &hours_worked);

		if(hours_worked <= WEEK)		// less than or equal to 40 hours worked
			gross_pay = hours_worked * rate_pay;
		
		else if (hours_worked > WEEK)		// more than 40 hours worked
			gross_pay = (rate_pay * WEEK) + ((hours_worked - WEEK) * OVERTIME);


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
		print_menu();
	}
	return 0;
}


void print_menu()
{
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("A) $8.75/hr			B) $9.33/hr\n");
	printf("C) $10.00/hr			D) $11.20/hr\n");
	printf("Q) quit\n");
	printf("*****************************************************************\n");

}
