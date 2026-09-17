/*
Purpose: programme which finds the volume and surface area of a box given length, width and height
Author: James OBrien
Date: 1/10/24
*/

#include <stdio.h>

int main()
{
    int height=0;
    float length=0, width=0, surface_area=0, volume=0;

    height=10;
    length=11.5;
    width=2.5;

    volume=height*length*width;
    printf("volume is %.3f\n", volume);

    surface_area=2*(length*width)+2*(length*height)+2*(height*width);
    printf("surface area is %.3f", surface_area);

    return 0;
}