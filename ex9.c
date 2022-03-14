//
// Created by Lucas on 2022-03-14.
//
// Exercise 9 WIP
//
// Write a program in C to check whether two given strings are an anagram.
// You must use pointers in this task.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 100
#define PRINT_1 "Input the first String: "
#define PRINT_2 "Input the second String: "
#define SUCCESS "are Anagram.\n"
#define FAILURE "are not Anagram.\n"

int main()
{
    char *input = malloc(MAX_INPUT);

    printf("%s", PRINT_1);
    printf("%s", PRINT_2);
    fgets(input, MAX_INPUT, stdin);


}
