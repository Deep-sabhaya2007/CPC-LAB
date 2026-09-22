#include <stdio.h>
void main()
{
    int n,odd=0,even=0;
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
        if (a[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("even number :%d \n",even);
    printf("odd number :%d",odd);
}
