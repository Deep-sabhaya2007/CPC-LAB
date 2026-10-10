#include <stdio.h>
void main()
{
    int i = 1, n, count = 0;
    printf("enter the number :");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
        i++;
    }
    if (count == 2)
    {
        printf("the number is prime");
    }
    else
    {
        printf("the number is not prime");
    }
}