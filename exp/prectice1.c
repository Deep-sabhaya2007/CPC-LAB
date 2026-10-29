#include<stdio.h>
void main()
{
    int a[10],pos=0,neg=0;
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] =",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i]>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
        
    }
    
    printf("Positive number = %d \n",pos);
        printf("Negative number = %d \n",neg);

}