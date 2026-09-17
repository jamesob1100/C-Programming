#include <stdio.h>

#define SIZE 5

int avg(int[]);

int main()
{
    int arr[SIZE];
    int i =0;
    int average = 0;

    printf("Enter %d numbers\n", SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &arr[i]);
    }

    average = avg(arr);

    printf("The average of your numbers is %d\n", average);

    return 0;
}

int avg(int arr[])
{
    int average = 0;
    int sum = 0;
    int i =0;

    for(i=0;i<SIZE;i++)
    {
        sum = sum + arr[i];
    }

    average = sum / SIZE;

    return average;
}