/*
Purpose: using pointer notation to create two float arrays, enter values into array1, copy into array2
Author: James O'Brien
Date: 3.12.24
*/

#include <stdio.h>

//symbolic name for size of array
#define SIZE 3

int main()
{
    float arr1[SIZE] = {0,0,0};
    float arr2[SIZE] = {0,0,0};
    int i = 0;

    //printf to read in numbers
    printf("Enter %d floating numbers\n", SIZE);

    //for loop to scan numbers into array1, copy into array2, print array 1 & 2
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", & *(arr1 + i));

        *(arr2 + i) = *(arr1 + i);

        printf("array 1 element %d contains %f\n", i, *(arr1 + i));
        printf("array 2 element %d contains %f\n", i, *(arr2 + i));
    }

    return 0;
}