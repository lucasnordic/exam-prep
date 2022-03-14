//
// Created by lucas on 2022-03-14.
// Exercise 8
//
// Write a program in C to count the number of vowels and consonants in a string using a pointer.

// Includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defines
#define MAX_INPUT 100
#define INPUT_Q "Input a string: "
#define RESULT_PRINT_1 "Number of vowels: "
#define RESULT_PRINT_2 "Number of consonants: "

// Constants
//char const string[] = "Message: Hello, this is world speaking!\n Response: Hello world!\n";

int main(){
    char *input = malloc(MAX_INPUT);
    int inputLength = 0;
    int vowels = 0;
    int consonants = 0;

    printf("%s", INPUT_Q);
    fgets(input, MAX_INPUT, stdin);
    inputLength = strlen(input) - 1;

    for (int i = 0; i < inputLength; ++i) {
        if(input[i] == 'a' || input[i] == 'o' || input[i] == 'e'
           || input[i] == 'i' || input[i] == 'A' || input[i] == 'O' || input[i] == 'E'
           || input[i] == 'I')
        {
            vowels++;
        } else if (input[i] != '\n' && input[i] != ' ' ) {
            consonants++;
        }
    }

    printf("%s%d\n%s%d",RESULT_PRINT_1, vowels, RESULT_PRINT_2, consonants);

    free(input);

    return 0;
}
