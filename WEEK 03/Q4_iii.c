/*
Purpose: programme to convert fahrenheit to celsius
Author: james obrien
Date: 8/10/24
*/

#include <stdio.h>

int main()
{
    float fahrenheit = 0, celsius = 0;

    printf("\nenter a temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit-32.0)*(5.0/9.0);

    printf("your temperature in celsius is %.1f\n", celsius);

    return 0;
}