//
// Created by Lucas on 2022-03-14.
//
// Exercise 9 DONE
//
// Write a program in C to check whether two given strings are an anagram.
// You must use pointers in this task.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 100
#define PRINT_1 "Input the first String:"
#define PRINT_2 "Input the second String:"
#define SUCCESS "are Anagram.\n"
#define FAILURE "are not Anagram.\n"

int main()
{
    char *input = malloc(MAX_INPUT);
    char *input2 = malloc(MAX_INPUT);
    unsigned long long inputSize = 0;
    unsigned long long input2Size = 0;
    int counter = 0;

    printf("%s", PRINT_1);
    fgets(input, MAX_INPUT, stdin);
    strtok(input, "\n");
    inputSize = strlen(input);

    printf("%s", PRINT_2);
    fgets(input2, MAX_INPUT, stdin);
    strtok(input2, "\n");
    input2Size = strlen(input2);

    if(inputSize == input2Size)
    for (int i = 0; i < inputSize; ++i) {
        char current1 = input[i];
        for (int j = 0; j < input2Size; ++j) {
            char current2 = input2[j];

            if(current1 == current2) {
                counter++;
                break;
            }
        }
    }

    if(counter == inputSize) {
        printf("%s and %s %s",input, input2, SUCCESS);
    } else {
        printf("%s and %s %s",input, input2, FAILURE);
    }

    free(input);
    free(input2);

    return 0;
}
