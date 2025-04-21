// usehotel.c - room rate program
// compile with listing 9.10
#include <stdio.h>
#include "listing9_11_hotel.h"	// defines constants, declares functions

int main(void)
{
	int nights;
	double hotel;
	int code;

	while((code = menu()) != QUIT)
	{
		switch(code)
		{
			case 1: hotel = HOTEL1;
				break;
			case 2: hotel = HOTEL2;
				break;
			case 3: hotel = HOTEL3;
				break;
			case 4: hotel = HOTEL4;
				break;
			default: hotel = 0.0;
				 printf("Ooops!\n");
				 break;
		}

		nights = getnights();
		showprice(hotel, nights);
	}

	printf("Thankyou and goodbye!\n");

	return 0;
}
