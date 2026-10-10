// Print multiplication table of a given number.
#include <stdio.h>
void main()
{
    int i = 1, y;
    printf("Enter the value of y :");
    scanf("%d", &y);
    while (i <= 10)
    {
        // result=result*y;
        printf("\n %d*%d=%d", y, i, y * i);
        i++;
    }
    // printf("\n %d ^%d=%d",y,i,result);
}