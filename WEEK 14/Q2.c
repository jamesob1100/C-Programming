/*
author: james obrien
date: 25/2/25
purpose: reading in a string and displaying with a space between each letter
*/
#include <stdio.h>

//symbolic name for size of array
#define SIZE 11

int main()
{
    char name[SIZE];
    int i = 0;

    printf("Enter your name\n");
    //fgets() to scan in name and store in array "name"
    fgets(name, sizeof(name), stdin);

    //for loop to print name with a space between each letter
    for(i=0;name[i]!='\0';i++)
    {
        printf("%c ", name[i]);
    }

    //new line for readability
    printf("\n");

    return 0;
}