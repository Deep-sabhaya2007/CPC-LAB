#include <stdio.h>
void main()
{
    double sum=1.0,i,j;
    int n;
    printf("enter value of n:");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        int fact = 1;
        for ( j = 1; j <= i; j++)
        {
            fact= fact*j;
            
        }
        sum=sum+(1.0/fact);
    }
    printf("%f",sum);
}