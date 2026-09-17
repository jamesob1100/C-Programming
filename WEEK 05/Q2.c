/*
Purpose: program which reads in positive integer, halves if even, multiply by 3 and add 1 if odd. loops until number is 1 and displays all steps
Author: James OBrien
Date: 22/10/24
*/

#include <stdio.h>

int main()
{
    int num = 0;
    int counter = 0;

    //read in number
    printf("\nenter a positive integer: ");
    scanf("%d", &num);

    printf("\nvalue entered is %d", num);

    //while loop set for value != 1
    while(num != 1)
    {
        //if num is odd, *3 +1, add 1 to counter
        if(num % 2 == 1)
        {
            num = num * 3 + 1;
            counter = counter + 1;
        }
        //if num is even, halve, add 1 to counter
        else
        {
            num = num / 2;
            counter = counter + 1;
        }

        //print the new value of num
        printf("\nnext value is %d", num);
    }

    //once num = 1, print final value and num of steps using counter
    printf("\nfinal value is 1, number of steps is %d", counter);

    return 0;
}