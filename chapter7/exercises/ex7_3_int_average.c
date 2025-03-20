// Exercise 7.3
// Program reads input until '0'is entered
// report total number of even integers (excluding 0),
// the average value of the even integers,
// the total number of odd integers entered,
// and the average value of the odd integers
#include <stdio.h>

int main(void)
{
	int count_even = 0;
	int count_odd = 0;
	int even_total = 0;
	int odd_total = 0;
	int input;

	printf("Enter an integer (0 to quit): ");
	while((scanf("%i", &input) == 1) && (input != 0))	// while input is an integer & not 0
	{
		if(input == 0)		// so we don't include 0 in the total of even numbers
			break;

		if(input % 2 == 0)	// input is even
		{
			count_even++;
			even_total += input;
		}
		else			// input is odd
		{
			count_odd++;
			odd_total += input;
		}

	}
	
	printf("Total number of even integers: %d, average of even integers: %d\n", count_even, even_total / count_even);
	printf("Total number of odd integers: %d, average of odd integers: %d\n", count_odd, odd_total / count_odd);

	return 0;
}
