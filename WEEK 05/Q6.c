/*
Prupose: using a loop to display all odd numbers between 1-99
Author: James O'Brien
Date: 25/11/24
*/
#include <stdio.h>

int main()
{
    int number = 1;

    //while loop to cycle through numbers, caps at 99
    while(number < 100)
    {
        //if number is odd print the number
        if(number % 2 == 1)
        {
            printf("%d, ", number);
        }

        //increment number by 1 to cycle through all numbers
        number++;
    }

    //print new line for readability
    printf("\n");

    return 0;
}