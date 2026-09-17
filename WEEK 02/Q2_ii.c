/*
Purpose: programme which finds the area of a circle given radius and pie
Author: James OBrien
Date: 1/10/24
*/

#include <stdio.h>

int main()
{
    float radius=0, pie=0, area=0;

    radius=4.8;
    pie=3.14;

    area=pie*(radius*radius);
    printf("area of circle is %f", area);
    
    return 0;
}