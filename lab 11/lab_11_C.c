#include<stdio.h>
void main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    for (int i = 1; i<=10; i++)
    {
 
        printf("\n %d * %d = %d",n,i,n*i);
    }
    
}