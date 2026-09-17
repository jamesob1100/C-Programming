#include <stdio.h>

#define SIZE 3

int avg(int, int, int);

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int average = 0;

    printf("Enter %d numbers\n", SIZE);
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    average = avg(num1,num2,num3);

    printf("The average of your numbers is %d\n", average);

    return 0;
}

int avg(int n1, int n2, int n3)
{
    int average = 0;
    int sum = 0;

    sum = n1+n2+n3;
    average = sum / 3;

    return average;
}