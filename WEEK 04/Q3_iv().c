/*
Purpose: programme that displays a day depending on inputted number
Author: James OBrien
Date: 15/10/24
*/

#include <stdio.h>

int main()
{
    int num=0;

    printf("enter a number from 1-7: ");
    scanf("%d", &num);

    switch(num)
    {
        case '1':
        {
            printf("Sunday");
            break;
        }
        case '2':
        {
            printf("Monday");
            break;
        }
        case '3':
        {
            printf("Tuesday");
            break;
        }
        case '4':
        {
            printf("Wednesday");
            break;
        }
        case '5':
        {
            printf("Thursday");
            break;
        }
        case '6':
        {
            printf("Friday");
            break;
        }
        case '7':
        {
            printf("Saturday");
            break;
        }
        default:
        {
            printf("invalid number entered");
            break;
        }
    }

    return 0;
}