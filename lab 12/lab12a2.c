#include<stdio.h>
void main()
{
    for (int i=1; i <=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            // j=j;
            printf("%d",j); 
        }
        printf("\n");
    }
    
}