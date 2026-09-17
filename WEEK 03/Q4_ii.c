/*
Purpose: programme to predict total heartbeats of someone based on their age
Author: james obrien
Date: 8/10/24
*/

#include <stdio.h>

int main()
{
    int heartbeat = 0, age = 0, total = 0;

    heartbeat = 39420000;

    printf("\nenter your age: ");
    scanf("%d", &age);

    total = age * heartbeat;

    printf("\nyour heart has made %d beats in your life!\n", total);

    return 0;
}