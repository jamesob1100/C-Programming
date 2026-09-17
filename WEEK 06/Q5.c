/*
Purpose: reads 5 char into an array and displays to screen
Author: James O'Brien
Date: 25.11.24
*/
#include <stdio.h>

//symbolic name for size of array
#define SIZE 5

int main()
{
    char array[SIZE] = {' ', ' ', ' ', ' ', ' '};
    int i=0;

    //printf and for loop to read in chars into array
    printf("\nEnter %d characters: ", SIZE);
    for(i = 0; i < SIZE; i++)
    {
        scanf("%c", &array[i]);
    }

    //for loop to display contents of array
    for(i = 0; i < SIZE; i++)
    {
        printf("%c", array[i]);
    }

    return 0;
}