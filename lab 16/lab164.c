// Perform Addition of two matrices.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter the value of r: ");
    scanf("%d", &r);

    printf("enter the value of c: ");
    scanf("%d", &c);
    int a[r][c], b[r][c],sum[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a[i][j]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("2nd matrix");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a[i][j]", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Sum =%d \n",sum[i][j] );
        }
        
    }
}