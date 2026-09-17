/*
Purpose: programme that checks if entered number evenly divides into other entered number
Author: james obrien
Date: 15/10/24
*/

#include <stdio.h>

int main()
{
    int num1=0, num2=0, result=0;

    printf("enter two whole numbers: ");
    scanf("%d, %d", &num1, &num2);

    if(num1 % num2 == 0)
    {
        printf("%d is evenly divisible by %d", num1, num2);
    }
    if(num1 % num2 != 0)
    {
        printf("%d is not evenly divisible by %d", num1, num2);
    }

    return 0;
}