// C Primer Plus
// Chapter 4 Char. strings and formatted I/O
// Listing 4.5 defines.c
// uses defined constants from limit.h and float
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest unsigned long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	return 0;
}
