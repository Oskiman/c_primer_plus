// Ch. 5 Ex. 4
// Change listing 5.13, addmeup.c to take as input
// an integer that decides how far the calculation should proceed

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
		sum = sum + count;
	}

	printf("sum = %d\n", sum);
		

	return 0;
}
