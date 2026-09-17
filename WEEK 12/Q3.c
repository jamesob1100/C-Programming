#include <stdio.h>

#define SIZE 3

int highest(int, int, int);

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int high = 0;

    printf("Enter %d numbers\n", SIZE);
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    high = highest(num1, num2, num3);
    
    printf("The highest number is %d\n", high);

    return 0;
}

int highest(int n1, int n2, int n3)
{
    int highest = 0;

    if(n1 > n2 && n1 > n3)
    {
        highest = n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        highest = n2;
    }
    else
    {
        highest = n3;
    }
    
    return highest;
}