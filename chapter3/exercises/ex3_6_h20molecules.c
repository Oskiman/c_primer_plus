// C Primer Plus
// Chapter 3 Data and C
// Exercise 3.6
// Program that requests an amount of water in quarts
// and displays the number of molecules in that amount
// mass of a single molecule approx. 3.0*10e-23 grams
// quart of water weighs approx. 950 grams
#include <stdio.h>

int main(void)
{
	float molecule_weight = 3.0e-23;
	float quart_grams = 950;
	float amount_quarts = 0;

	printf("Enter an amount of quarts: ");
	scanf("%f", & amount_quarts);

	float amount_molecules = amount_quarts * quart_grams / molecule_weight;

	printf("%f quarts contain approximately %f molecules\n", amount_quarts, amount_molecules);

	return 0;
}
