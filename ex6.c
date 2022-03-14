/******************************************************************************

 EXERCISE 6

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 0;
    int input2AsInt = 0;
    char *input2 = malloc(50);
    int const *pointer;
    int const *pointer2;

    printf("Input the first number: ");
    pointer = &input;
    scanf("%d", &input);

    printf("Input the second number: ");
    scanf("%49s", input2);
    input2AsInt = atoi(input2);
    pointer2 = &input2AsInt;

    printf("The sum of the entered numbers is : %d",(*pointer2 + *pointer));

    return 0;
}
