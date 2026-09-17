/*
Purpose: Programme which uses arrays to read in 15 numbers and display them on the same line, seperated by a space
Author: James OBrien
Date: 12/11/24
*/

#include <stdio.h>

//symbolic name for size of entered numbers
#define SIZE 15

int main()
{
    int num = SIZE;
    int numbers[SIZE];
    int i;

    //printf to read in numbers
    printf("\nEnter %d integer numbers: ", num);

    //for loop to scan numbers into array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    //for loop to print numbers with space between each
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}