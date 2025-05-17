// Exercise 10.1
// Modify the rain program in listing 10.7 (the book says 10.12!)
// so that it does the calculations using pointers instead of subscripts
// For now I have just commented out the original code
#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(void)
{
	const float rain[YEARS][MONTHS] = {
	{10.1, 8.1, 6.8, 4.2, 2.1, 1.8, 0.2, 0.3, 1.1, 2.3, 6.1, 7.4},
	{9.2, 9.8, 4.4, 3.3, 2.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 5.2},
	{6.6, 5.5, 3.8, 2.8, 1.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 4.2},
	{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
	{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3}
	};

	int year, month;
	float subtot, total;
	const float (*year_ptr)[MONTHS];	// *year_ptr is 12 elements
	const float *month_ptr;
	printf("YEAR	RAINFALL  (inches)\n");
	//for(year = 0, total = 0; year < YEARS; year++)
	//{
		// for each year, sum rainfall for each month
	//	for(month = 0, subtot = 0; month < MONTHS; month++) 
		//for(month = 0, subtot = 0; month < MONTHS; month++)
			//subtot += rain[year][month];
	//		subtot += *month_ptr++;

	//	printf("%5d %15.1f\n", 1997 + year, subtot);
	//	total += subtot;	// total for all years
	//}
	//year_ptr points to the first element of rain[]
	//year_ptr is sizeof 48 (4 * 12 elements)
	//year_ptr < rain + YEARS moves to the next line of the array
	for(year_ptr = rain, total = 0; year_ptr < rain + YEARS; year_ptr++)
	{
		// month_ptr = *year_ptr, set month_ptr to beginning of each 'year'
		for(month_ptr = *year_ptr, subtot = 0; month_ptr < *year_ptr + MONTHS; month_ptr++)
			subtot += *month_ptr;

		printf("%5d %15.1f\n", (int) (1997 + (year_ptr - rain)), subtot);
		total += subtot;
	}

	printf("The yearly average is %.1f inches.\n\n", total/YEARS);
	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	//for(month = 0; month < MONTHS; month++)
	//{	
	//	// for each month, sum rainfall over years
	//	for(year = 0, subtot = 0; year < YEARS; year++)
			//subtot += rain[year][month];
	//		subtot += *month_ptr++;
	//	printf("%4.1f ", subtot/YEARS);
	//}
	for(month = 0; month < MONTHS; month++)
	{
		for(year = 0, subtot = 0; year < YEARS; year++)
			subtot += *(*(rain + year) + month);

		printf("%4.1f ", subtot / YEARS);
	}

	printf("\n");

	// printf("%zu\n", sizeof *year_ptr);	// 48

	return 0;
}
