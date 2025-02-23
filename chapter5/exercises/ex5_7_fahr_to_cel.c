// Ch.5 Ex.7
// program requests user enter a fahrenheit temperature, type double,
// pass value as an argument to a function called Tempratures()
// the function should calculate the Celsius and Kelvin equivalent and
// display all three temperatures with 2 places precision
// Celsius = 1.8 * Fahrenheit + 32.0
// Kelvin = Celsius + 273.16
// Temperatures() should use const symbolic representations
// and main should loop until a non-numeric value is entered
#include <stdio.h>

void Temperatures(double fahr);

int main(void)
{
	double input_temp = 1.0;
	printf("Please enter a temperature in fahrenheit: ");
	while(scanf("%lf", &input_temp) == 1)
	{
		Temperatures(input_temp);
		printf("Please enter a temperature in fahrenheit: ");
	}

	return 0;
}

void Temperatures(double fahr)
{
	const double multi = 5.0 / 9.0;
	const double minus_fahr = 32.0;
	const double add_kelv = 273.16;
	double celsius = (fahr - minus_fahr) * multi;	
	double kelvin = celsius + add_kelv;
	
	printf("%.2lf in fahrenheit is %.2lf in celsius and %.2lf in kelvin\n", fahr, celsius, kelvin);
}
