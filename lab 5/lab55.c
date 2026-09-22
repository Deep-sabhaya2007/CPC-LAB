// Find out largest number from given three numbers. 
#include <stdio.h>
void main()
{
    int a,b,c;

     printf("Enter the value of a : ");
    scanf("%d", &a);

     printf("Enter the value of b : ");
    scanf("%d", &b);

     printf("Enter the value of c : ");
    scanf("%d", &c);

    if (a>b && a>c)
    {
       printf("a is largest number : %d",a);
    }

    if (b>a && b>c)
    {
       printf("b is largest number : %d",b);
    }

    
    if (c>a && c>b)
    {
       printf("c is largest number : %d",c);
    }

}