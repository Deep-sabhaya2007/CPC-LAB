//  Check Prime Number
#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter n : ");   scanf("%d",&n);
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count==0)
    {
        printf("Given Number is Prime");
    }
    else{
        printf("Given Number is Not Prime");
    }
    
    
}