//Count number of positive, negative and zero elements from 3 X 3 matrix.

#include <stdio.h>
void main()
{
    int  positive = 0, negative = 0, null = 0;
  
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);

            
        if (a[i][j] > 0)
        {
            positive++;
        }
        else if (a[i][j] < 0)
        {
            negative++;
        }
        else
            null++;
        }
        printf("\n");

    }
    printf("total no of positive elemant : %d \n", positive);
    printf("total no of negative elemant : %d \n", negative);
    printf("total no of null elemant : %d", null);
}