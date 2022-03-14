//
// Created by lucas on 2022-03-10.
// 1 - a,b,c
//

#include <stdio.h>
#include <ctype.h>

// print the sum of a/c and b/d as a simplified fraction
int addFraction(int a, int c, int b, int d) {

    int gcd = 1; // Greatest common denominator
    int num = (a * d) + (c * b); // numerator
    int den = b * d; // denominator
    int finalDen = 0;
    int finalNum = 0;

    for (int i = 1; i <= num && i <= den; ++i) {
        if(num%i == 0 && den%i == 0) {
            gcd = i;
        }
    }
    finalDen = den / gcd; // calculate lowest denominator
    finalNum = num / gcd; // calculate lowest numerator

    printf("Simplified fraction of %d/%d + %d/%d is = %d/%d\n",a,b,c,d,finalNum,finalDen);
    return 1;
}

// print the subtraction of a/c and b/d as a simplified fraction
int subFraction(int a, int c, int b, int d) {

    int gcd = 1; // Greatest common denominator
    int num = (a * d) - (c * b); // numerator
    int den = d * b; // denominator

    for (int i = 1; i <= num && i <= den; i++) {
        if(num%i == 0 && den%i == 0) {
            gcd = i;
        }
    }

    printf("Simplified fraction of %d/%d - %d/%d is = %d/%d\n",a,b,c,d,num/gcd,den/gcd);
    return 1;
}

// print the subtraction of a/c and b/d as a simplified fraction
int mulFraction(int a, int c, int b, int d) {

    int gcd = 1; // Greatest common denominator
    int num = a * c; // numerator
    int den = b * d; // denominator

    for (int i = 1; i <= num && i <= den; i++) {
        if(num%i == 0 && den%i == 0) {
            gcd = i;
        }
    }

    printf("Simplified fraction of %d/%d * %d/%d is = %d/%d\n",a,b,c,d,num/gcd,den/gcd);
    return 1;
}

int main()
{
    addFraction(2,56,5,400);
    subFraction(2,56,5,400);
    mulFraction(2,56,5,400);

    return 0;
}
