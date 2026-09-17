#include <stdio.h>

#define SIZE 3

void sum (int, int, int);
void average(int);

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Enter %d numbers\n", SIZE);
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    sum(num1, num2, num3);

    return 0;
}

void sum(int num1, int num2, int num3)
{
    int sum = 0;

    sum = num1 + num2 + num3;

    average(sum);
}

void average(int sum)
{
    int average = 0;

    average = sum / SIZE;

    printf("The average of the numbers is %d", average);
}

