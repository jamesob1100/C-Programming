/*
Program: adding the elements of an array together and displaying the result
Author: James OBrien
Date: 19/11/24
*/
#include <stdio.h>

//symbolic names for row and column of array
#define ROW 4
#define COL 6

int main()
{
    //initialising array with values
    int data[ROW][COL] = {
                    3,2,5,7,4,2,
                    1,4,4,8,13,1,
                    9,1,0,2,0,0,
                    0,2,6,3,-1,-8
                    };
    //indexes used in for loop to cycle through array
    int i = 0;
    int j = 0;
    int sum = 0;

    //for loop to cycle through array and add its contents together, storing result in sum
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            sum = sum + data[i][j];  
        }
    }

    //printf() sum 
    printf("the sum of the array is %d\n", sum);

    return 0;
}