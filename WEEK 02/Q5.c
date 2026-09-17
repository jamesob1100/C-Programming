/*
Purpose: programme to demontrate storing values 
Author: james obrien
Date: 1/10/24
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    float ans1=0, ans2=0, ans3=0, ans4=0, ans5=0;
    char mod;

    num1 = 15;
    num2 = 10;
    num3 = 3;

    ans1 = num1 + num2;
    ans2 = num1 - num2;
    ans3 = num1 * num2;
    ans4 = num1 / num2;
    ans5 = num1 % num3;

    mod = '%';

    printf("15 + 10 is %f\n", ans1);
    printf("15 - 10 is %f\n", ans2);
    printf("15 * 10 is %f\n", ans3);
    printf("15 / 10 is %f\n", ans4);
    printf("15 %c 3 is %f", mod, ans5);

    return 0;
}