#include <stdio.h>
void main()
{
    int x, y, result=1;
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++)
    {
        result = result * x;
    }
    printf("%d^%d = %d", x, y, result);
}