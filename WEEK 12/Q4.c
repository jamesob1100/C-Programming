#include <stdio.h>

void increm(int);

int main()
{
    int num = 1;

    printf("%d\n", num);

    increm(num);

    printf("%d\n", num);

    return 0;
}

void increm(int num)
{
    num+=2;

    printf("%d\n", num);

    return;
}