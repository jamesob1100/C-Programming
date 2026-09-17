/*
Purpose: programme to demonstrate usage of modulus arithmetic operator
Author: james obrien
Date: 1/10/24
*/

#include <stdio.h>

int main()
{
    float result1, result2, result3, result4, result5, result6;
    char mod;

    result1 = 2 % 2;
    result2 = 3 %2;
    result3 = 5 % 2;
    result4 = 7 % 3;
    result5 = 100 % 3;
    result6 = 100 % 7;

    mod = '%';

    printf("2 %c 2\n%f\n", mod, result1);
    printf("3 %c 2\n%f\n", mod, result2);
    printf("5 %c 2\n%f\n", mod, result3);
    printf("7 %c 3\n%f\n", mod, result4);
    printf("100 %c 3\n%f\n", mod, result5);
    printf("100 %c 7\n%f", mod, result6);

    return 0;
}