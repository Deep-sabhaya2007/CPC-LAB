#include <stdio.h>
void main()
{
    int n;
    float avg,sum=0;
    printf("enter the value of n :");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter the a[%d]",i);
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
float max=a[0],min=a[0];
for (int i = 0; i < n; i++)
{
    if (a[i] > max)
    {
        max = a[i];
    }
    if (a[i]<min)
    {
        min = a[i];
    }
    
    
}


    
printf("sum = %f",sum);
printf("max = %f \n",max);
printf("min = %f \n",min);
}