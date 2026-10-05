#include <stdio.h>
void main()
{
    int n, *p;
    printf("Enter How many Number You want to enter : ");
    scanf("%d", &n);

    int a[n];

    p = a;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Number : ");
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d : ", *p + i);
        printf("%d \n", p + i);  /*address*/
    }
}