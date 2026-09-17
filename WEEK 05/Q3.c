/*
Purpose: program which reads in num between 1-5 and displays all numbers between 1-20 which are evenly divisible by number read in
Author: James O'Brien
Date: 25/11/24
*/

#include <stdio.h>

int main()
{
    int number = 0;
    int i = 0;

    //read in number
    printf("\nEnter a number between 1-5: ");
    scanf("%d", &number);

    //for loop which cycles through 1-20
    for(i = 1; i < 21; i++)
    {
        //if loop checks if number evenly divides into 1-20
        if(i % number == 0)
        {
            //if number evenly divides, print number
            printf("\n%d is evenly divisible by %d", i, number);
        }
    }

    return 0;
}