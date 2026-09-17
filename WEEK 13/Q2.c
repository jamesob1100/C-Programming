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
    
    printf("The highest number is %d\n", high);

    return 0;
}

int highest(int arr[])
{
    int highest = 0;
    int i = 0;

    for(i=0;i<SIZE;i++)
    {
        if(highest < arr[i])
        {
            highest = arr[i];
        }
    }

    return highest;
}