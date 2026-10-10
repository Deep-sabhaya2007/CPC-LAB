#include <stdio.h>
void main()
{
    int sum = 0, n, count=0;
    float avg;
    printf("If you wants to stop the loop then enter -1 ");
    printf("\n");
    while (1)
    {

        printf("enter the number :");
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }
        sum = sum + n;
        count = count + 1;
    }
    avg = sum / count;
    printf("%f",avg);
}