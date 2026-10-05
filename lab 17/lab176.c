#include <stdio.h>
void main()
{
    int n, *p, *q;
    printf("Enter How many Number You want to enter : ");
    scanf("%d", &n);

    int a[n], b[n];

    p = a;
    q = b;

    for (int i = 0; i < n; i++)
    {
        printf("enter the a[%d]", i);
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++)
    {
        *(q + i) = *(p + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", *(q + i));
    }
}