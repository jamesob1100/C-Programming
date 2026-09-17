/*
Purpose: program which sorts an array of 3 int in ascending order
Author: James OBrien
Date: 13/1/25
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    int arr[SIZE] = {0,0,0};
    int temp = 0;
    int i = 0;

    printf("Enter %d numbers: \n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < SIZE; i++)
    {
        if(arr[i] > arr[i+1])
        {
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp; 
        }
    }

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}