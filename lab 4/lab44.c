// Area of Triangle
#include <stdio.h>
void main()
{
    float h, b, Area;
    printf("Enter Height : ");
    scanf("%f", &h);
    printf("Enter Base : ");
    scanf("%f", &b);
    Area = 0.5 * h * b;
    printf("%f", Area);
}