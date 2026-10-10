#include <stdio.h>
void main()
{
    int x, i = 1, fact = 1;
    printf("Enter the value of x :");
    scanf("%d", &x);
    while (i <= x)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of the number = %d:", fact);
}