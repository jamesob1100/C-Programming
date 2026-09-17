/*
Purpose: Programme which uses two arrays, one to store inputted data, one to reverse the data
Author: James OBrien
Date: 5/11/24
*/

#include <stdio.h>

//define size of arrays and number of inputs
#define SIZE 5

int main()
{
    int number = SIZE;
    int set1[SIZE];
    int reverse[SIZE];
    int i;

    //ask user to input numbers
    printf("\nEnter %d integer values: ", number);
    
    //for loop to place inputted numbers into first array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &set1[i]);
    }

    //for loop to reverse inputted numbers
    for(i = 0; i < SIZE; i++)
    {
        //reverse set starts at 0, places numbers from set1 starting at 4 and lowering by one
        reverse[i] = set1[SIZE -1 - i];
    }

    //print reverse set
    for(i = 0; i < SIZE; i++)
    {
    printf("%d\n", reverse[i]);
    }
    return 0;
}