//
// Created by lucas on 2022-03-10.
// 4
//
// Prints day in a year from supplied month, day, year

#include <stdio.h>
#include <ctype.h>

void increase_day_counter(int month, int day, int year, int *dayCounter) {
    int daysInYear = 365;

    if(year%4 == 0 || year%400 == 0) { // if year is divisible by four or fourhundred
        daysInYear = 366; // it's a leap year
    }

    for (int i = 1; i < month; ++i) { // for months
        if(i == 2) { // if february
            if (daysInYear == 366) { // if leap year
                *dayCounter += 29;
            } else {
                *dayCounter += 28;
            }
        } else if (i == 1 || i == 3 || i == 5 || i == 7) {
            *dayCounter += 31;
        } else if (i == 8 || i == 10 || i == 12) {
            *dayCounter += 31;
        } else {
            *dayCounter += 30;
        }
    }

    *dayCounter += day; // add day in month
}

int main (void) {
    setbuf(stdout, 0);

    int dayCounter = 0;
    int month = 11;
    int day = 27;
    int year = 1997;

    increase_day_counter(month,day,year,&dayCounter);

    dayCounter = 0;
    month = 12;
    day = 31;
    year = 1992;
    increase_day_counter(month,day,year,&dayCounter);

    printf("%d", dayCounter);
}