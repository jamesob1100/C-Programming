/*
Purpose: reads 4 numbers into an array and prints them, swaps 1&2 and 3&4 and prints new order
Author: James O'Brien
Date: 25.11.24
*/
#include <stdio.h>

//symbolic name for size of array
#define SIZE 4

int main()
{
    int array[SIZE] = {0,0,0,0};
    int temp = 0;
    int i = 0;

    //printf to ask for numbers
    printf("\nEnter %d numbers: ", SIZE);

    //for loop to scanf numbers into array1, printf to display this array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);

        printf("%d ", array[i]);
    }

    //printf for readability
    printf("\n");

    // Use a loop to perform the swapping
    for (int i = 0; i < SIZE; i += 2) 
    {
        // Swap 1st with 2nd, 3rd with 4th
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }

    // Display the array with the new order
    for (int i = 0; i < 4; i++) 
    {
        printf("%d ", array[i]);
    }

    return 0;
}