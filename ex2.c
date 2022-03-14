//
// Created by lucas on 2022-03-10.
// 2 - a, b
// +
// exercise 10 - line 27:
// Write a C program to input any number from user and check whether nth bit of the given number is
//  set (1) or not (0).
//

#include <stdio.h>
#include <stdint.h>

void print_bin(uint32_t number) {

    int loops = 1; // keep track of loops

    setbuf(stdout, 0); // for being able to see printf while debugging

    uint32_t i = 1; // set i to 1
    i = i << 31; // bit-shift to largest possible value
    for (i; i > 0 ; i = i / 2) { // keep looping for every division of i by 2 that is larger than 0
        (number & i) ? printf("1") : printf("0");

        if (loops%8 == 0 && loops <= 31) {
            printf(".");
        }

        // EXTRA that prints whether a single bit is set or not:
        int input = 0;
        if(loops == 32 - input) {
            (number & i) ? printf("|+1|") : printf("|+Not|");
        }
        loops++; // increase loops
    }

    printf("\n"); // print newline
}

uint16_t make_16bit(uint8_t least_significant, uint8_t most_significant) {
    uint16_t returnValue = most_significant << 8 | least_significant;

    return returnValue;
};

int main (void) {
    uint32_t number = 0; // used for printing in binary
    uint8_t least = 0;
    uint8_t most = 0;

    // check print_bin with 0
    print_bin(number);

    // check print_bin with 1
    number = 1;
    print_bin(number);

    // check print_bin with 2
    number = 2;
    print_bin(number);

    // check print_bin with 43
    number = 43;
    print_bin(number);

    // check print_bin with 123456789
    number = 123456789;
    print_bin(number);

    // check with least and most significant 8 bits converted to 16
    least = 7;
    most = 1;
    print_bin(make_16bit(least, most));

    return 0;
}
