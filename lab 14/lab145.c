#include <stdio.h>
void main()
{
    int n,count=0;
    printf("Enter how many number you want ot enter : ");
    scanf("%d", &n);
    float h[n], w[n];

    for (int i = 0; i < n; i++)
    {
        printf(" Enter your Height and Weight a[%d] : \n", i);

        printf("Enter the Hight : ");
        scanf("%f", &h[i]);

        printf("Enter the Weight : ");
        scanf("%f", &w[i]);

        if (h[i]>170 && w[i]<50)
        {
            count++;
        }
    }
    printf("No. People (h>170 && w<50) = %d",count);
}