// exercise 6.1
// Write a program that creates an aray with 26 elements and stores the 
// 26 lower case letters in it.  Also have it show the array contents
#include <stdio.h>

int main(void)
{
	char lower[26];

	size_t array_size = sizeof(lower) / sizeof(lower[0]);
	
	for(int i = 0; i < array_size; i++)
	{
		lower[i] = 'a' + i;
		printf(" %c ", lower[i]);
	}

	printf("\n");

	return 0;
}
