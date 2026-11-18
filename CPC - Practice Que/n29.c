// Reverse a Number
#include<stdio.h>
void main()
{
    int n,rem=0 ;
    printf("Enter n : ");scanf("%d",&n);
    
    while (n>0)
    {
        rem=rem*10+(n%10);
        n=n/10;
    }
    printf("%d",rem);
}