//
// Created by lucas on 2022-03-10.
// 7

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutate(char *string, int start, int length) {
    if(start == length) {
        printf("%s ", string);
    } else {
        for (int i = start; i <= length; i++) {
            swap((string+start), (string+i));
            permutate(string, start+1, length);
            swap((string+start), (string+i)); // ?
        }
    }
}

int main (void) {
    setbuf(stdout, 0);

    char string[] = "abcd";
    int length = strlen(string);

    printf("The permutatoidsdks...\n");
    permutate(string, 0, length - 1);

    return 0;
}
