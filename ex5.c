//
// Created by lucas on 2022-03-10.
// 5
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    setbuf(stdout, 0);

    int const MAX_INPUT = 1000;
    char *input = (char*)malloc(MAX_INPUT);
    char *input2 = malloc(MAX_INPUT);
    int chars = 0;
    int words = 1;
    int lines = 1;

    printf("Enter stuff:");

    fgets(input,MAX_INPUT, stdin);
    // or
    //scanf("%s",input);

    char const *pointer = input;
    int newline = 0; // for setting if there was a new line or not
    for (int i = 0; i < strlen(input); ++i) {
        strncpy(input2,pointer, 1);
        if(pointer[0] == ' ' || (newline && pointer[0] != ' ')) {
            words++;
            newline = 0;
        } else if(pointer[0] == '\\' && pointer[1] == 'n') {
            lines++;
            newline = 1;
        }

        chars++;
        printf("%c", input2[0]);
        pointer++;
    }
    printf("\nLines:%d | Words:%d | Chars:%d", lines, words, chars);

    free(input2);
    free(input);
    //strcmp()
}