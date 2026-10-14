// Print Pascal triangle
#include <stdio.h>
void main()
{
    int n, i, j,num=1;
    printf("enter value of n:");
    scanf("%d", &n);

    for ( i = 0; i<n; i++)
    {
        for (int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        
        num=1;
        for (j=0; j<=i; j++)
        {
            printf("%d ",num);
            num=num*(i-j)/(j+1);
        }
        printf("\n");
        
    }
    // printf("%d",num);
    // printf("\n");
    
}