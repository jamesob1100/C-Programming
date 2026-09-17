/*
author: james obrien
date: 30/1/25
purpose: use a multidimensional array to take in values, display the values, find the highet&lowest values, find the average of all values
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int arr[ROW][COL];
    int i = 0;
    int j = 0;
    int highest = 0;
    int lowest = 0;
    float avg = 0;

    printf("Enter %d numbers\n", ROW*COL);

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    printf("\n");

    highest = arr[0][0];
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(highest < arr[i][j])
                {
                    highest = arr[i][j];
                }
        }
    }

    lowest = arr[0][0];
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(lowest > arr[i][j])
                {
                    lowest = arr[i][j];
                }
        }
    }

    printf("The highest number is %d and the lowest number is %d\n", highest, lowest);

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            avg = avg+arr[i][j];
        }
    }
    
    avg = avg / (ROW*COL);

    printf("The average of the numbers is %.3f\n", avg);

    return 0;
}