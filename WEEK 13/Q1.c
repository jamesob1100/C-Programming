#include <stdio.h>

int square(int *, int *);
float circle(int *);

int main()
{
    int side1 = 0;
    int side2 = 0;
    int radius = 0;
    float circle_ar = 0;
    int square_ar = 0;

    printf("Enter two sides of a square\n");
    scanf("%d", &side1);
    scanf("%d", &side2);

    printf("Enter the radius of a circle\n");
    scanf("%d", &radius);

    square_ar = square(&side1, &side2);
    circle_ar = circle(&radius);

    printf("The area of your square is %d and the area of your circle is %f", square_ar, circle_ar);

    return 0;
}

int square(int *side1, int *side2)
{
    int square = 0;

    square = *side1 * *side2;

    return square;
}

float circle(int *radius)
{
    float circle = 0;

    circle = (*radius^2) * 3.14;

    return circle;
}