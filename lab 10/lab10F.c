#include <stdio.h>
void main()
{
    int i = 1, n, count = 0,fact,sum = 0;
    printf("enter the number :");
    scanf("%d", &n);
    while (i <= n)
    {
        fact = n%i==0;
        sum = sum + fact;
    }
    if (sum == n)
    {
        printf("the number is prime");
    }
    else
    {
        printf("the number is not prime");
    }
}