// Calculate 𝑥𝑦 without using power function.
#include <stdio.h>
void main()
{
    int x, y, result = 1, i = 1;
    printf("Enter the value of x :");
    scanf("%d", &x);
    printf("Enter the value of y :");
    scanf("%d", &y);
    while (i <= y)
    {
        result = result * x;
        i++;
    }
    printf("%d^%d = %d", x, y, result);
}