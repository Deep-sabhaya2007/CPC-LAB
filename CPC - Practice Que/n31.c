//  Check Palindrome Number
#include<stdio.h>
void main(){
    int n,rev=0,original;
    printf("Enter n : ");
    scanf("%d",&n);
    original=n;
    while (n>0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    if (original==rev)
    {
        printf("Given number is Palindrome");
    }
    else{printf("Given number is not Palindrome");}
    
}