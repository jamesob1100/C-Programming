/*
author: james obrien
date: 30/1/25
purpose: understanding use of arrays
*/

#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE]={1,2,3,4,5,6,7,8,9,10};
    int i=0;

    for (i = 0; i < 10; i++)
    {
        arr[i] = 9 - i;
    }
    // Display the contents of arr[8]
    printf("%d\n", arr[8]);
    
    for (i = 0; i < 10; i++)
    {
        arr[i] = arr[ arr[i] ];
    }
    // Display the contents of arr[8]
    printf("%d\n", arr[8]);

    printf("\n");
    
    for(i=0;i<SIZE;i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}