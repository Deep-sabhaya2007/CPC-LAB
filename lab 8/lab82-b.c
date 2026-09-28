// 2. Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop
#include <stdio.h>
void main()
{
    int i=1,n;
    printf("Enter value of n :");
    scanf("%d",&n);
    do
     {
       if (i%2!=0)
       {
        printf("\n%d",i);
       }
       i++;
    } while (i<=n);
    
    
}