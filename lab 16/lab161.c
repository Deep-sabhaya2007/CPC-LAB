// Read values in two-dimensional array and print them in matrix form.
#include<stdio.h>
void main()
{
  int r,c;
    printf("enter the value of r: ");
    scanf("%d", &r);

    printf("enter the value of c: ");
    scanf("%d", &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    
    
    
}