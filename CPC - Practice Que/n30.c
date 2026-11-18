//  Find the Sum of Digits
#include<stdio.h>
void main(){
    int n,rem=0;
    printf("Enter n : ");   scanf("%d",&n);
    while (n>0)
    {
        rem=rem+(n%10);
        n=n/10;
    }
    printf("%d",rem);
}