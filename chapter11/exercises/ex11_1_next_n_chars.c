// Exercise 11.1
// Design and test a function that fetches the next n 
// characters from input including blanks, tabs and newlines
#include <stdio.h>

char* fetch_n_chars(char* input, int num);
int main(int argc, char* argv[])
//int main(void)
{
	//char input[] = "Hello World!";
	//int num = 5;
	if(argc != 2)
	{
		printf("Usage: ./program_name, input_string\n");
		break;
	}

	int num;
	printf("How many characters should I fetch?: ");
	scanf("%d", &num);

	printf("%s\n", fetch_n_chars(*argv, num));

	return 0;
}

char* fetch_n_chars(char* input, int num)
{
	char* output;
	char ch;	// to traverse input

	for(int i = 0; i < num; i++)
	{
		if((ch = getchar()) == EOF)	// reached end before num
			break;

		*(output + i) = ch;		// copy char to output array
	}

	return output;
}
