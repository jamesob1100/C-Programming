/*
Program: multiplying 2 multi-dimensional arrays by each other and storing the results in a third
Author: James OBrien
Date: 19/11/24
*/

#include <stdio.h>

//symbolic names for rows/columns of the arrays
#define ROW 3
#define COL 4

int main()
{
    //initialising arrays so multiplying will give squared numbers from 1-12
    int array1[ROW][COL] = {
                            1,2,3,
                            4,5,6,
                            7,8,9,
                            10,11,12
                            };
    int array2[ROW][COL] = {
                            1,2,3,
                            4,5,6,
                            7,8,9,
                            10,11,12
                            };
    //array 3 initialised to 0 as it will store the results from multiplication
    int array3[ROW][COL] = {
                            0,0,0,
                            0,0,0,
                            0,0,0,
                            0,0,0
                            };
    int i = 0;
    int j = 0;

    //for loop to multiply array1 * array2 and store the values in array3
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];
        }
    }

    //for loop with printf() statement to display results stored in array3 as well as the column and row
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("\nRow %d, Column %d contains %d ", i, j, array3[i][j]);
        }
    }

    return 0;

}