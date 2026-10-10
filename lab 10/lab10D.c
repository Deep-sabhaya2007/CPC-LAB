#include <stdio.h>
void main()
{
    // int n;
    // printf("enter the number :");
    // scanf("%d", &n);

    int last, first, rem, rev = 0, sum = 0, n, x, y;
    printf("enter the number :");
    scanf("%d", &n);
    last = n % 10;
    while (n > 0)
    {
        rem = n % 10;
        rev = (rev*10)+rem;
        n = n / 10;
    }
    while (rev > 0)
    {
        x = rev % 10;
        printf("%d\n", x);
        rev=rev/10;
    }
}