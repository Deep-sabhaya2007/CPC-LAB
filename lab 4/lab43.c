#include <stdio.h>
void main()
{
    // area of circle
    float r, Area;
    printf("Enter the value of radius of circle : ");
    scanf("%f", &r);
    Area = 3.14 * r * r;
    printf("%f", Area);
}