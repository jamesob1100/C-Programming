/*
Purpose: programme which tells if three inputed side lengths of a triangle form a valid triangle
Author: James OBrien
Date: 15/10/24
*/

#include <stdio.h>

int main()
{
    float side1=0, side2=0, side3=0;

    printf("enter three sides of a triangle: ");
    scanf("%f, %f, %f", &side1, &side2, &side3);

    if(side1 + side2 > side3)
    {
        printf("%.3f, %.3f and %.3f form a valid triangle", side1, side2, side3);
    }
    else if(side1 + side3 > side2)
    {
        printf("%.3f, %.3f and %.3f form a valid triangle", side1, side2, side3);
    }
    else if(side2 + side3 > side1)
    {
        printf("%.3f, %.3f and %.3f form a valid triangle", side1, side2, side3);
    }
    else
    {
        printf("%.3f, %.3f and %.3f do not form a valid triangle", side1, side2, side3);
    }

    return 0;
}