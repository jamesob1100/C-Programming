/*
Purpose: using a loop to display all even numbers from 1-100, seperated by commas
Author: James O'Brien
Date: 25/11/24
*/
#include <stdio.h>

int main()
{
    int number = 1;

    //while loop to cycle through numbers, caps at 100
    while(number < 101)
    {
        //if number is even print the number
        if(number % 2 == 0)
        {
            printf("%d,", number);
        }

        //increment number by 1 to move to next number
        number++;
    }

    //print new line for readability
    printf("\n");

    return 0;
}