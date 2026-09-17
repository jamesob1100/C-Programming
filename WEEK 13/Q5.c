/*
author: james obrien
date: 18/2/25
purpose: enter 5 numbers into an array, pass array to function which displays which numbers are odd/even, returns total number of even to be displayed
*/
#include <stdio.h>

//symbolic name for size of array
#define SIZE 5

//function to check for odd and even numbers & count total even
int odd_even(int[]);

int main()
{
    int arr[SIZE];
    int i = 0;
    int count = 0;
    
    printf("Enter %d whole numbers\n", SIZE);

    //for loop to scan entered numbers into array
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &arr[i]);
    }

    //function call
    count = odd_even(arr);

    printf("There are %d even numbers\n", count);

    return 0;
}

int odd_even(int arr[])
{
    int i = 0;
    int check = 0;
    int count = 0;

    //for loop to cycle through array
    for(i=0;i<SIZE;i++)
    {
        check = arr[i];

        //if loop to check if number is even/odd
        if(check % 2 == 0)
        {
            printf("%d is even\n", check);

            //counter for number of even numbers
            count = count + 1;
        }
        else
        {
            printf("%d is odd\n", check);
        }
    }

    //returns number of even numbers to be displayed in main
    return count;
}