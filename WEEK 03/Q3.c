/*
Purpose: programme to demonstrate scanf with float variables and controlling decimal places for floats
Author: james obrien
Date: 8/10/24
*/

#include <stdio.h>

int main()
{
    float num1=0, num2=0, num3=0;

    printf("enter 3 floating point numbers\n");
    scanf("%f, %f, %f", &num1, &num2, &num3);

    printf("you entered:\n%.4f\n%.3f\n%.0f", num1, num2, num3);

    return 0;
}