/*
Purpose: programme to demonstrate arithmetic opeerations
Author: james obrien
Date: 1/10/24
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, sum=0;
    float num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16, average=0;

    num1 = 1;
    num2 = 2;
    num3 = 3;
    num4 = 4;
    num5 = 5;

    sum = num1 + num2 + num3 + num4 + num5;

    num6 = 1.0;
    num7 = 1.1;
    num8 = 1.2;
    num9 = 1.3;
    num10 = 1.4;
    num11 = 1.5;
    num12 = 1.6;
    num13 = 1.7;
    num14 = 1.8;
    num15 = 1.9;
    num16 = 2.0;

    average = (num6 + num7 + num8 + num9 + num10 + num11 + num12 + num13 + num14 + num15 + num16) / 11;

    printf("the sume of the integers 1 to 5 is %d\nthe average of the floating point numbers 1.0, 1.1, 1.2 ... 2.0 is %f", sum, average);

    return 0;
}