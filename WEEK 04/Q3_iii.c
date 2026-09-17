/*
Purpose: programme which displays an entered single digit number as a word
Author: James OBrien
Date: 15/10/24
*/

#include <stdio.h>

int main()
{
    int num=0;

    printf("enter a single digit number: ");
    scanf("%d", &num);

    if(num == 1)
    {
        printf("one");
    }
    else if(num ==2)
    {
        printf("two");
    }
    else if(num == 3)
    {
        printf("three");
    }
    else if(num == 4)
    {
        printf("four");
    }
    else if(num == 5)
    {
        printf("five");
    }
    else if(num == 6)
    {
        printf("six");
    }
    else if(num == 7)
    {
        printf("seven");
    }
    else if(num == 8)
    {
        printf("eight");
    }
    else if(num == 9)
    {
        printf("nine");
    }
    else if(num == 0)
    {
        printf("zero");
    }
    else
    {
        printf("invalid number entered");
    }

    return 0;
}