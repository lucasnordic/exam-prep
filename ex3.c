//
// Created by lucas on 2022-03-10.
// 3
//
// Prints:
//            C
//          i   I
//        s       s
//      b           b
//    e               e
//  s                   s
//t s e b s i C i s b e s t

#include <stdio.h>
#include <ctype.h>

int main (void) {
    setbuf(stdout, 0);

    char c[] = "Cisbest"; // characters to print
    char spaces = 6;    // Spaces where first character starts

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < spaces; ++j) {
            char space[] = "  ";
            printf(space);
        }
        spaces--;

        char temp = c[i];
        printf("%c", temp);

        if (spaces < 5) {
            printf("   ");
            for (int j = 4; j > spaces; --j) {
                char space[] = "    ";
                printf(space);
            }
            if(i == 1) { // Capture special case of "I"
                printf("%c", toupper(temp));
            } else {
                printf("%c", temp);
            }
        }

        printf("\n");
    }

    // print first half of bottom backwards
    for (int i = 2; i < sizeof (c) + 1; ++i) {
        char temp = c[sizeof (c) - i];
        printf("%c ", temp);
    }

    // print rest of bottom
    for (int i = 1; i < sizeof (c); ++i) {
        char temp = c[i];
        printf("%c ", temp);
    }

    return 0;
}
