/*
Purpose: programme to find sum and average of three floating numbers entered by user
Author: james obrien
Date: 8/10/24
*/

#include <stdio.h>

int main()
{
    float num1=0, num2=0, num3=0, sum=0, average=0;

    printf("enter three floating point numbers:");
    scanf("%f, %f, %f", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = (num1 + num2 + num3) / 3;

    printf("the sum of your numbers is %.3f\nthe average of your numbers is %.3f", sum, average);

    return 0;
}