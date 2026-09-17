#include <stdio.h>

#define SIZE 5

int highest(int[]);

int main()
{
    int arr[SIZE];
    int high = 0;
    int i =0;

    printf("Enter %d numbers\n", SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &arr[i]);
    }

    high = highest(arr);
    
    for(i=0;i<SIZE;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int highest(int arr[])
{
    int i = 0;

    for(i=0;i<SIZE;i++)
    {
        arr[i] = arr[i] * 2;
    }

    return arr;
}