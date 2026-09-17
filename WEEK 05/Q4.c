/*
Purpose: program which counts 1-10 printing the value in words on new lines
Author: James O'Brien
Date: 25/11/24
*/

#include <stdio.h>

int main()
{
    int count = 1;

    //while loop to go through each number
    while(count < 11)
    {
        //if blocks for each number
        if(count == 1)
        {
            printf("\nThis number is one");
        }
        if(count == 2)
        {
            printf("\nThis number is two");
        }
        if(count == 3)
        {
            printf("\nThis number is three");
        }
        if(count == 4)
        {
            printf("\nThis number is four");
        }
        if(count == 5)
        {
            printf("\nThis number is five");
        }
        if(count == 6)
        {
            printf("\nThis number is six");
        }
        if(count == 7)
        {
            printf("\nThis number is seven");
        }
        if(count == 8)
        {
            printf("\nThis number is eight");
        }
        if(count == 9)
        {
            printf("\nThis number is nine");
        }
        if(count == 10)
        {
            printf("\nThis number is ten");
        }
        
        //increment the count by 1 to restart loop on next number
        count++;
    }

    return 0;
}