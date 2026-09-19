#include<stdio.h>
void main()
{
    int x,fact=1;
    printf("enter x :");
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}