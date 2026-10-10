#include<stdio.h>
void main()
{
    int last,first,rem,rev=0,sum=0,n;
    printf("enter the number :");
    scanf("%d",&n);
    last = n%10;
    while (n>0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n=n/10;   
    }
    first=rev%10;
    sum = last + first;
    printf("%d",sum);
}