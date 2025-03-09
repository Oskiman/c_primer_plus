// Consider two infinite series
// 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 ...
// 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 ...
//
// Write a program that evaluates running totals of these 2 series
// upto some limit of number of terms
#include <stdio.h>
int main(void)
{
	int num_terms, count, sign;
	double run_total_1 = 0.0;
	double run_total_2 = 0.0;
	
	printf("Enter a number of terms: ");
	scanf("%d", &num_terms);

	for(count = 1, sign = 1; count <= num_terms; count++, sign *= -1)	// sign *= -1 alternates between + and -
	{
		run_total_1 += 1.0 / count;
		run_total_2 += 1.0 * sign / count;
	}

	printf("After %d terms, the running totals are: %lf and %lf\n", num_terms, run_total_1, run_total_2);

	return 0;
}
