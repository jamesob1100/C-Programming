/*
Purpose: programme to demonstrate controlling decimal places of a float variable
Author: james obrien
Date: 8/10/24
*/

#include <stdio.h>

int main()
{
    float v1=0, v2=0, v3=0;

    v1 = 5;
    v2 = -4.5;
    v3 = 11.25;

    printf("v1 = %.0f v2 = %.1f v3 = %.2f", v1, v2, v3);

    return 0;
}