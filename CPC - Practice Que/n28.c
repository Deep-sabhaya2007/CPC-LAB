// Count the Digits of a Number
#include<stdio.h>
void main()
{
    int n,temp=0,count=0;
    printf("Enter n : ");scanf("%d",&n);
    for (int i=1;n!=0;i++)
    {
        temp=n%10;
        n=n/10;
        count++;
    }
    printf("%d",count);
}