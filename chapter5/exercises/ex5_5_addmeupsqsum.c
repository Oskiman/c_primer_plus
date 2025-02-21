// Ch. 5 Ex. 5
// Change exercise 4 so that it computes the 
// sum of the square of the integers
// 1, 4, 9 etc.

#include <stdio.h>

int main(void)				
{
	int num_days = 0;
	int sum = 0;
	printf("How many days?: ");
	scanf("%d", &num_days);
	int count = 0;		
	while(count++ < num_days)		
	{
		sum = sum + (count * count);
	}

	printf("sum = %d\n", sum);
		

	return 0;
}
