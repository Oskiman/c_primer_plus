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
    if(result == NULL)                                      // check for memory allocation failure
    {
        printf("Failed to fetch characters.\n");
        return 1;
    }

    printf("Fetched characters: %s\n", result);

    // free allocated memory
    for(int i = 0; i < argc; i++)
        free(arguments[i]);                                 

    free(arguments);
    free(result);                                        
    return 0;
}

char* fetch_n_chars(char* argv[], int num)
{
    char* output = (char*)malloc(num * sizeof(char));
    if(output == NULL)
    {
        printf("Failed to allocate memory for output.\n");
        return NULL;
    }
    int index = 0;
    while(argv[0][index] != '\0' && index < num)
    {
        output[index] = argv[0][index];
        index++;
    }
    output[index] = '\0';
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