//
// Created by lucas on 2022-03-10.
// Exercise ?_?

#include <stdio.h>
#define MAX_SIZE 5 //Maximum size of the array
int main(){
    int arr[MAX_SIZE]; //Declares an array size
    int i, num;
    int a[5] = {1,2,3,4,5};
    printf("%c", a[2]);
    //Enter size of array
    printf("Enter size of the array: ");
    scanf("%d", &num);
    //Reading elements of array
    printf("Enter elements in array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAll negative elements in array are: ");

    for(i=0; i<num; ++i)
    {
        //Printing negative elements
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
