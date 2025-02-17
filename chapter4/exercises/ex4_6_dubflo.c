// exercise 4.6
#include <stdio.h>
#include <float.h>

int main(void)
{
	double d = 1.0 / 3.0;
	float f = 1.0 / 3.0;

	printf("1.0 / 3.0\n");
	printf("double: %.4lf %.12lf %.16lf\n", d, d, d);
	printf("float:  %.4f %.12f %.16f\n", f, f, f);
	printf("FLT_DIG = %f\n", FLT_DIG);
	printf("DBL_DIG = %lf\n", DBL_DIG);


	return 0;
}
