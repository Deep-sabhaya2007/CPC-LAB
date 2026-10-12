// Return the maximum of three floating-point numbers.

#include <stdio.h>

float fo(float p);
void main()
{
    float p;
    printf("Enter the principal value = ");
    scanf("%f", &p);
    float res = fo(p);
    printf("three floating-point numbers %.3f", res);
}
float fo(float p)
{
    return p;
}