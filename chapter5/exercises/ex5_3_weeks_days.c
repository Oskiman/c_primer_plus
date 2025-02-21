// Ch.5 Ex.3
// program asks for number of days & converts to weeks and days
// 18 days would output 2 weeks, 4 days
// display results in following format:
// 18 days are 2 weeks 4 days
// use a while loop, terminate if input <= 0
#include <stdio.h>

int main(void)
{
	const int seven = 7;
	int num_days = 0;
	int days = 1;	// arbitrary value so we enter while loop
	int weeks = 0;

	while(days > 0)
	{
		printf("Enter number of days: ");
		scanf("%d", &num_days);
		if(num_days <= 0)	// avoid unnecessary output
			break;
		weeks = num_days / seven;
		days = num_days % seven;
		printf("%d days are %d weeks %d days\n", num_days, weeks, days);
	}
	return 0;
}
