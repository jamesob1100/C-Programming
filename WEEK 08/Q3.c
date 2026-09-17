#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL]= {
                            0,0,0,
                            0,0,0
                            };
    int row_sum = 0;
    int col_sum = 0;
    int i = 0;
    int j = 0;

    printf("\nEnter %d numbers to be put into an array\n", ROW * COL);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("\nRow %d, Col %d contains %d", i, j, array[i][j]);
        }
    }
    
    for(i = 0; i < 1; i++)
    {
        for(j = 0; j < COL; j++)
        {
            row_sum = row_sum + array[i][j];
        }
    }
    printf("\nSum of row 1 is %d", row_sum);
    row_sum = 0;

    for(i = 1; i < 2; i++)
    {
        for(j = 0; j < COL; j++)
        {
            row_sum = row_sum + array[i][j];
        }
    }
    printf("\nSum of row 2 is %d", row_sum);
    row_sum = 0;

    for(i = 2; i < 3; i++)
    {
        for(j = 0; j < COL; j++)
        {
            row_sum = row_sum + array[i][j];
        }
    }

    printf("\nSum of row 3 is %d", row_sum);

    return 0;
}