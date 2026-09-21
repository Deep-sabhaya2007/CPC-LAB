#include <stdio.h>
void main()
{
    int n,positive=0,negative=0;
    printf("enter the value of n: ");
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the a[%d]",i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
        
    }
    printf("positive number :%d \n",positive);
    printf("negative number :%d",negative);
}