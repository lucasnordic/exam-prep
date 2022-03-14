//
// Created by Lucas on 2022-03-14.
//
// Exercise 10 DONE
//
// shift a single bit

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
    setbuf(stdout, 0); // enable console prints while debugging

    uint32_t *inputAsInt = malloc(sizeof(uint32_t));
    int *input2AsInt = malloc(sizeof(int));

    printf("Input number:");
    scanf("%d", inputAsInt);

    printf("Input nth bit to toggle:");
    scanf("%d", input2AsInt);

    uint32_t mask = 1 << ((*input2AsInt) - 1);
    *inputAsInt = *inputAsInt ^ mask;

    printf("After toggling bit %d: %d\n", *input2AsInt, *inputAsInt);

    free(inputAsInt);
    free(input2AsInt);

    return 0;
}
