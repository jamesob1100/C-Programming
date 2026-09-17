/*
Purpose: Program which uses a while loop to display the numbers 1-10 in descending order on the same line seperated by a comma
Author: James O'Brien
Date: 25/11/24
*/

#include <stdio.h>

int main()
{
    //initialise number at 10
    int number = 10;

    //set while loop to include numbers 1-10
    while(number > 0)
    {
        //print current number
        printf("%d", number);

        //if number > 1, print comma
        if(number > 1)
        {
            printf(", ");
        }

        //decrement number by 1
        number--;
    }

    //print new line for readability
    printf("\n");

    return 0;
}