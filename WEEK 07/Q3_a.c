/*
Purpose: Programme which uses arrays to read in 15 numbers and display them on seperate lines
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

    //for loop to scan inputted numbers into array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    //for loop to print numbers with line seperation
    for(i = 0; i < SIZE; i++)
    {
        printf("\n%d\n", numbers[i]);
    }

    return 0;
}