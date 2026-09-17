/*
Purpose: programme to demonstrate scanf
Author: james obrien
Date: 8/10/24
*/

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("enter 3 whole numbers");
    scanf("%d, %d, %d", &num1, &num2, &num3);

    printf("%d\n%d\n%d\n", num1, num2, num3);

    return 0;
}