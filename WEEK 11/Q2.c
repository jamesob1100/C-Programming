#include <stdio.h>

void stars(int);

int main()
{
    int no_stars = 0;
    
    printf("Enter number of stars: \n");
    scanf("%d", &no_stars);

    stars(no_stars);

    return 0;
}

void stars(int num)
{
    int i = 0;

    for(i=0;i<num;i++)
    {
        printf("*");
    }
}