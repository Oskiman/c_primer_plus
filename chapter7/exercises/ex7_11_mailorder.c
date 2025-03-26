// Exercise 7.11
// Program uses a switch in a loop such that the response of:
// a) lets the user enter pounds of artichokes desired
// b) the pounds of beets
// c) the pounds of carrots
// q) exits the ordering process
// Program should then compute total charges, discount (if any),
// shipping charges and grand total.
// Program should then display all the purchase information, 
// the cost per pound, the pounds ordered, the cost for that
// order for each vegetable, total cost of the order, the discount
// (if there is one), the shipping charge and the grand total of
// all the charges
// artichokes $1.25 a pound
// beets for $0.65 a pound
// carrots for $0.89 a pound
// 5% discount for orders of $100 or more prior to adding shipping costs
// $3.50 shipping & handling for any order of 5 pounds or under
// $10.00 shipping & handling for orders over 5 pounds and under 20 pounds
// $8.00 plus $0.10 per pound for shipments of 20 pounds or over
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

void print_menu();

int main(void)
{
	// constants for various prices
	const float ARTICHOKES_PRICE = 1.25;
	const float BEETS_PRICE = 0.65;
	const float CARROTS_PRICE = 0.89;
	const float SHIP_DISCOUNT = 0.05;	// discount for shipping if order > 100lbs prior to shipping cost
	const float SHIP_LESS_5 = 3.50;		// if order is less than 5lbs
	const float SHIP_5_20 = 10.00;		// if order is between 5lbs & 20lbs
	const float SHIP_20_PLUS = 8.00;	// if order is 20lbs or greater
	const float EXCESS_20 = 0.10;		// if order is 20lbs or greater, extra per lb
	
	// constants for weight limits
	const float under_5 = 5.0;
	const float under_20 = 20.0;
	const float over_100 = 100.0;
	
	// variables for input, calculation etc.
	bool quit = false;		// to exit menu
	char ch;
	float order_total = 0.0;	// total of produce ordered (discount applied here, before shipping)
	float shipping_charges = 0.0;	// total cost of shipping
	float total_discount = 0.0;	
	float grand_total = 0.0;
	float artichokes_amount = 0.0;
	float beets_amount = 0.0;
	float carrots_amount = 0.0;
	float total_weight = 0.0;	// total weight of order
	float arti_total_price = 0.0;
	float beets_total_price = 0.0;
	float carr_total_price = 0.0;
	float total_before_ship = 0.0;
	
	print_menu();

	while((ch = getchar()) != 'q')
	{
		ch = tolower(ch);
		switch(ch)
		{
			case 'a':	printf("How many pounds of artichokes?: \n");//enter lbs of artichokes
					scanf("%f", &artichokes_amount);
					break;
			case 'b':	printf("How many pounds of beets?: \n");// enter lbs of beets
					scanf("%f", &beets_amount);
					break;
			case 'c':	printf("How many pounds of carrots?: \n");// enter lbs of carrots
					scanf("%f", &carrots_amount);
					break;
			case 'q':	quit = true;
					break;
			default:	print_menu();	// output menu until quit
					continue;
		}

		if(quit == true)
			break;

		// calculate prices etc.
		arti_total_price = artichokes_amount * ARTICHOKES_PRICE;
		beets_total_price = beets_amount * BEETS_PRICE;
		carr_total_price = carrots_amount * CARROTS_PRICE;

		total_before_ship = arti_total_price + beets_total_price + carr_total_price;

		total_weight = artichokes_amount + beets_amount + carrots_amount;		

		// calculate grand totals
		if(total_weight < under_5)					//weight of order is under 5lbs
			shipping_charges = SHIP_LESS_5;
		else if(total_weight >= under_5 || total_weight < under_20)	// weight of order is between 5 & 20 lbs
			shipping_charges = SHIP_5_20;
		else if(total_weight > under_20)				// weight of order is over 20lbs
		{
			if(total_weight > over_100)				// weight of order is over 100lbs so apply 5% discount before calculating shipping costs
				total_discount = total_before_ship - (total_before_ship * SHIP_DISCOUNT);
				total_before_ship -= total_discount;
		
		//SHIP_20_PLUS and add EXCESS_20 per lb over 20
		shipping_charges = SHIP_20_PLUS + ((total_weight - under_20) * EXCESS_20);

		}
		
		grand_total = total_before_ship + shipping_charges;

		// output totals
		printf("Order invoice (all prices in $)\n");
		printf("Produce\t\tCost per lb\tlbs ordered\tsubtotal\n");
		printf("Artichokes\t%.2f\t\t%.2f\t\t%.2f\n", ARTICHOKES_PRICE, artichokes_amount, arti_total_price);
		printf("Beets\t\t%.2f\t\t%.2f\t\t%.2f\n", BEETS_PRICE, beets_amount, beets_total_price);
		printf("Carrots\t\t%.2f\t\t%.2f\t\t%.2f\n", CARROTS_PRICE, carrots_amount, carr_total_price);
		printf("\n");
		printf("Total Cost:\t%.2f\n", total_before_ship);
		printf("Discount:\t%.2f\n", total_discount);
		printf("Shipping:\t%.2f\n", shipping_charges);
		printf("\n");
		printf("Grand total:\t%.2f\n", grand_total);
		printf("\n");

	}
	return 0;
}

void print_menu()
{
	printf("ABC Mail Order grocery\n");
	printf("Press the corresponding key to enter the number of pounds of produce you wish to order.\n");
	printf("a) artichokes\n");
	printf("b) beets\n");
	printf("c) carrots\n");
	printf("q) quit\n");
}







