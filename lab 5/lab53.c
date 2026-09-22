//  Check whether the given number is positive or negative. 
#include <stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    if (a>=0)
    {
        printf("a is positeve");
    }
    else
    {
        printf("a is negative");
    }
}