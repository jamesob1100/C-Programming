/*
Purpose: programme to demonstrate scanf with char variable
Author: james obrien
Date: 8/10/24
*/

#include <stdio.h>

int main()
{
    char my_char1 = ' ';
    char my_char2 = ' ';

    printf("enter two characters\n");
    scanf("%c, %c", &my_char1, &my_char2);

    printf("you entered %c and %c", my_char1, my_char2);

    return 0;
}