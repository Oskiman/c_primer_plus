// Exercise 7.10
// 1988 US Federal Tax Schedule
// Category		Tax
// Single		15% of first $17,850 plus 28% of excess
// Head of Household	15% of first $23,900 plus 28% of excess
// Married, Joint	15% of first $29,750 plus 28% of excess
// Married, Separate 	15% of first $14,875 plus 28% of excess
// Write a program that lets the user specify the tax category
// and the taxable income and that then calculates the tax.
// Use a loop so that the user can enter several tax cases.
#include <stdbool.h>
#include <stdio.h>

#define EXCESS 0.28		// excess tax rate
#define FIRST 0.15		// first tax rate
#define SINGLE 17850		// single category tax threshold
#define HEAD_HOUSE 23900	// Head of Household tax threshold
#define MARR_JOINT 29750	// Married, joint tax threshold
#define MARR_SEP 14875		// Married, separated tax threshold

void print_menu();

int main(void)
{
	print_menu();	
	bool quit = false;
	int input;
	float tax_limit;
	float income;
	float tax;
	while(scanf("%d", &input) == 1)
	{
		switch(input)
		{
			case 1: tax_limit = SINGLE;
				break;
			case 2: tax_limit = HEAD_HOUSE;
				break;
			case 3: tax_limit = MARR_JOINT;
				break;
			case 4: tax_limit = MARR_SEP;
				break;
			case 5: quit = true;
				break;
			default:	print_menu();
					continue;
		}

		if(quit == true)
			break;

		printf("Enter taxable income: ");
		scanf("%f", &income);

		if(income < tax_limit)
			tax = FIRST * income;
		else
			tax = FIRST * income + EXCESS * (income - tax_limit);

		printf("You owe $%.2f in tax\n", tax);
		printf("\n");

		print_menu();
	}

	return 0;
}

void print_menu()
{
	printf("Category		Tax\n");
	printf("1) Single		15%% of first $17,850 plus 28%% of excess\n");	// %% so we can print a single %
	printf("2) Head of Household	15%% of first $23,900 plus 28%% of excess\n");
	printf("3) Married, Joint	15%% of first $29,750 plus 28%% of excess\n");
	printf("4) Married, Separate 	15%% of first $14,875 plus 28%% of excess\n");
	printf("5) Quit\n");

	printf("Enter a category(1 - 5): ");
}
