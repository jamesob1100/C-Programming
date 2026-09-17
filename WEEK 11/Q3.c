#include <stdio.h>

int find_min(int, int, int);
int find_max(int, int, int);

int main()
{
    int num1, num2, num3;
    int min = 0;
    int max = 0;

    printf("Enter 3 whole numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    min = find_min(num1,num2,num3);
    max = find_max(num1,num2,num3);

    printf("%d is the biggest number and %d is the smallest number", max, min);

    return 0;
}

int find_min(int n1, int n2, int n3)
{
    int min = 0;

    if(n1 < n2 && n1 < n3)
    {
        min = n1;
    }
    else if(n2 < n1 && n2 < n3)
    {
        min = n2;
    }
    else
    {
        min = n3;
    }

    return min;
}

int find_max(int n1, int n2, int n3)
{
    int max = 0;

    if(n1 > n2 && n1 > n3)
    {
        max = n1;
    }
    else if(n2 > n1 && n2 > n3)
    {
        max = n2;
    }
    else
    {
        max = n3;
    }

    return max;
}