// Print numbers between two given numbers which is divisible by 2. 
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    while (a<=b)
    {
        if (a%2==0)
        {
            printf("\n%d",a);
        }
        a++;
    }
    
}