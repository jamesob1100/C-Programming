#include <stdio.h>

int odd_even(int);

int main()
{
    int num = 0;

    printf("Enter a whole number\n");
    scanf("%d", &num);

    num = odd_even(num);

    if(num == 1)
    {
        printf("Your number is even\n");
    }
    else
    {
        printf("Your number is odd\n");
    }

    return 0;
}

int odd_even(int num)
{
    int result = 0;

    if(num % 2 == 0)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }

    return result;
}
