// Exercise 8.8
// Write a program that shows a menu offering the choice of
// addition, subtraction, multiplication or division. 
// After getting your choice, the program asks for two numbers
// then performs the requested operation.
// The program should accept only the offered menu choices.
// It should use type float for the numbes and allow the user
// to try again if they fail to enter a number.
// In the case of subtraction, the program should prompt the
// user to enter a new value if 0 is entered for the second number
// *****************************************************************
// NOTE: This code is far too complicated for the exercise but I had
// a lot of fun doing it and learnt a little bit about functions and
// function pointers too as they were the only way I could figure out
// how to make the code work as the exercise asked, i.e. getting the
// operand before the numbers.  I may refactor this at some point
// *****************************************************************
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
void print_menu();
float get_num(void);
char get_first(void);

// function pointer will point to required function, add, subtract, multiply or divide
float (*op_pointer)(float num1, float num2);

int main(void)
{
	bool quit = false;
	bool sub_flag = false;	// if this is true, check num2 != 0
	float num1 = 0.0;
	float num2 = 0.0;
	char input;		// for +, -, * or /
	char operator;
	print_menu();

	while((input = get_first()) != 'q')
	{
		printf("Enter first number: ");
		num1 = get_num();
		printf("Enter second number: ");
		num2 = get_num();
		input = tolower(input);	// change all input to lower case
		switch(input)
		{
			case 'a':	//addition
					op_pointer = &add;
					operator = '+';
					break;
			case 's':	//subtract	// set flag if chosen & check if num2 == 0
					sub_flag = true;
					op_pointer = &subtract;
					operator = '-';
					break;
			case 'm':	//multiply
					op_pointer = &multiply;
					operator = '*';
					break;
			case 'd':	//divide
					op_pointer = &divide;
					operator = '/';
					break;
			default:	print_menu();
					continue;

		}

		if(sub_flag == true)
			printf("The second number cannot be 0 for subtraction. Enter again\n");
		while(sub_flag = true && num2 == 0)
			num2 = get_num();

		printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, op_pointer(num1, num2));

		sub_flag = false;	// reset flag
		print_menu();
	}
	

	return 0;
}

void print_menu()
{
	printf("Enter the operation of your choice: \n");
	printf("a) add		s) subtract\n");
	printf("m) multiply	d) divide\n");
	printf("q) quit\n");

}

float add(float num1, float num2)
{
	return num1 + num2;
}

float subtract(float num1, float num2)
{
	return num1 - num2;
}

float multiply(float num1, float num2)
{
	return num1 * num2;
}

float divide(float num1, float num2)
{
	return num1 / num2;
}

float get_num(void)
{
	int ch;
	float num;

	while(scanf("%f", &num) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);

		printf(" is not a number\n");
		printf("Enter a number: \n");
	}

	return num;
}

// below is exercise 8.6!
char get_first(void)
{
	int ch;
	do{
		ch = getchar();
	}while(isspace(ch));

	while(getchar() != '\n')
		continue;	// dispose of rest of line
	return ch;
}
