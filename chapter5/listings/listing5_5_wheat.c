// wheat.c - exponential growth
#include <stdio.h>

#define SQUARES 64
#define CROP 1E15	// US wheat crop in grains
			//
int main(void)
{
	double current, total;
	int count = 1;

	printf("square	grains added	total grains	");
	printf("fraction of\n");
	printf("					");
	printf("US total\n");
	total = current = 1.0;	// start with 1 grain
	printf("%4d %15.2e %13.2e %13.2e\n", count, current, total, total / CROP);

	while(count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;	// double grains on next square
		total = total + current;	// update total

		printf("%4d %15.2e %13.2e %13.2e\n", count, current, total, total / CROP);
	}

	return 0;
}
