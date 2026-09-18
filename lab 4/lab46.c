// Temperature change from Fahrenhit to Celsius
#include <stdio.h>

void main()
{
    float f, Celsius;
    printf("enter the value of f : ");
    scanf("%f", &f);
    Celsius = (((f - 32) * 5)) / 9;
    printf("%f", Celsius);
}