/*
Purpose: read 5 int numbers into an array, copy them into another array using a loop
Author: James O'Brien
Date: 25/11/24
*/

#include <stdio.h>

//symbolic name for size of array
#define SIZE 5

int main()
{
    int array1[SIZE] = {0,0,0,0,0};
    int array2[SIZE] = {0,0,0,0,0};
    int i = 0;

    //printf to enter numbers
    printf("\nEnter %d integer numbers: ", SIZE);

    //for loop to scanf numbers
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }

    //for loop to copy array1 into array2
    for(i =0; i < SIZE; i++)
    {
        array2[i] = array1[i];
    }

    //for loop to print array2
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}