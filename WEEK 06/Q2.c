/*
Purpose: use an array to read in three temperatures in fahrenheit and convert them to celsius
Author: James O'Brien
Date: 25/11/24
*/
#include <stdio.h>

//symbolic name for size of arrays
#define SIZE 3

int main()
{
    float tempc[SIZE] = {0,0,0};
    float tempf[SIZE] = {0,0,0};
    int i = 0;

    //printf to ask for 3 temperatures in fahrenheit
    printf("\nEnter %d temperatures in fahrenheit: ", SIZE);

    //for loop to scanf the numbers into array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &tempf[i]);
    }

    //for loop to convert each degree into celsius in new array
    for(i = 0; i < SIZE; i++)
    {
        tempc[i] = ((tempf[i] - 32.0) * (5.0 / 9.0));
    }

    //for loop to print each conversion
    for(i = 0; i < SIZE; i++)
    {
        printf("\n%.1f fahrenheit in celsius is %.1f", tempf[i], tempc[i]);
    }

    return 0;
}