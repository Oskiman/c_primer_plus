// Exercise 11.1
// Design and test a function that fetches the next n 
// characters from input including blanks, tabs and newlines
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* fetch_n_chars(char* argv[], int num);
char* store_args(int argc, char* argv[]);

int main(int argc, char* argv[])
{
    if(argc < 2)                                            // check for correct number of arguments
    {
        printf("Usage: ./program_name input_string\n");
        return 1;
    }

    char** arguments = store_args(argc, argv);       // store arguments in an array
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

    // char* result = fetch_n_chars(argv[1], num);             // fetch characters from the input string
    // if(result == NULL)                                      // check for memory allocation failure
    // {
    //     printf("Failed to fetch characters.\n");
    //     return 1;
    // }
    char** result = fetch_n_chars(arguments, num);

    printf("Fetched characters: %s\n", result);
    //printf("Fetched characters: %s\n", fetch_n_chars(argv, num));

    for(int i = 0; i < argc; i++)
        free(arguments[i]);                                 // free allocated memory

    free(arguments);
    //free(result);                                           // free allocated memory
    return 0;
}

char* fetch_n_chars(char* argv[], int num)
{
    if(args == NULL || num <= 0 || *args == NULL)              // check for invalid input
        return NULL;    

    char* output = (char*)malloc((num + 1) * sizeof(char));     // allocate memory for the output string
    if(output == NULL)
        return NULL;

    int i = 0;
    while(i < num && *args[0] != '\0')                         // copy characters from input to output
    {
        output[i] = *args[0];
        args[0]++;
        i++;
    }
    output[i] = '\0'; // null-terminate the output string

    return output;
}

// copy args into an array
char* store_args(int argc, char* argv[])
{
    char **arguments = (char**)malloc(argc * sizeof(char*));
    if(arguments == NULL)
    {   
        printf("Failed to allocate memory for arguments.\n");
        return NULL;
    }
    
    for(int i = 0; i < argc; i++)
    {
        strcpy(arguments[i], argv[i]);
    }

    return arguments;
}