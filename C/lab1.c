#include <stdio.h>
void main()
{
    int h, b;
    float area;
    printf("Enter the value of h : ");
    scanf("%d", &h);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    area = 0.5 * h * b;
    printf("Area of triangle = %f", area);
}