// proto1.c - uses a function prototype
#include <stdio.h>

int imax(int, int);	//prototype

int main(void)
{
	printf("the maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
	printf("the maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
	
	return 0;
}

int imax(int m, int n)
{
	int max;

	if(n > m)
		max = n;
	else
		max = m;

	return max;
}
