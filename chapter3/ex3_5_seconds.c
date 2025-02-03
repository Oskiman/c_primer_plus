// C Primer Plus
// Chapter 3 Data and C
// Exercise 3.5
// Program to ask for age in years and output in seconds


#include <stdio.h>

int main(void)
{
	int age = 0;

	printf("Enter your age in years: ");
	scanf("%d", & age);
	long long seconds = age * (3.156 * 10e7);
	printf("You are %lld seconds old\n", seconds);
	return 0;
}
