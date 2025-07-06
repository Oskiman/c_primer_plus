// Exercise 11.1
// Design and test a function that fetches the next n 
// characters from input including blanks, tabs and newlines
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* fetch_n_chars(char* input, int num);
int main(int argc, char* argv[])
{
    if(argc < 2)                                            // check for correct number of arguments
    {
        printf("Usage: ./program_name input_string\n");
        return 1;
    }

    int num;
    printf("How many characters should I fetch?: ");
    if(scanf("%d", &num) != 1)                              // check for valid input
    {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if(num <= 0)                                            // check for valid number
    {
        printf("Number of characters must be greater than zero.\n");
        return 1;
    }

    char* result = fetch_n_chars(argv[1], num);     
    if(result == NULL)                                      // check for memory allocation failure
    {
        printf("Failed to fetch characters.\n");
        return 1;
    }

    printf("%s\n", result);
    free(result);

    return 0;
}

char* fetch_n_chars(char* input, int num)
{
    if(input == NULL || num <= 0)                             // check for invalid input
        return NULL;    

    char* output = (char*)malloc((num + 1) * sizeof(char));     // allocate memory for the output string
    if(output == NULL)
        return NULL;

    for(int i = 0; i < num; i++)
    {
        if(input[i] == '\0')                                    // check for end of string
            break;

        output[i] = input[i];                                   // copy character from input to output
    }
    output[num] = '\0'; // null-terminate the output string

    return output;
}
