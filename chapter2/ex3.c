#include <stdio.h>

int main(void)
{
	printf("Enter your age in years: ");
	int age = 0;
	scanf("%d", &age);
	printf("%d years is %d days\n", age, age * 365);

	return 0;
}
