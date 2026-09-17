/*
author: james obrien
date: 21/2/25
purpose: incrementing a number from main by 2 in a function, passing by reference
*/
#include <stdio.h>

//incremet function
void increm(int *);

int main()
{
    int num = 1;

    //print 'num' before function call
    printf("%d\n", num);

    //call function to increment 'num' +2
    increm(&num);

    //print 'num' after function call
    printf("%d\n", num);

    return 0;
}

//function to increment 'num' +2
void increm(int *num)
{
    (*num)+=2;

    //print in function
    printf("%d\n", *num);

    return;
}