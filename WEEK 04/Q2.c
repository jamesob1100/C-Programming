/*
Purpose:programme which states if an entered number is even or odd
Author: james obrien
Date: 15/10/24
*/

#include <stdio.h>

int main()
{
    int num=0;

    printf("enter a number between 1-100: ");
    scanf("%d", &num);

    if(num % 2 == 1)
    {
        printf("%d is odd", num);
    }
    if(num % 2 != 1)
    {
        printf("%d is even", num);
    }

    return 0;
}