#include <stdio.h>
void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {14, 9, 6, 8, 10};

    int *p1 = a;
    int *p2 = b;
    int temp;

    for (int i = 0; i < 5; i++)
    {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*p1+i);
    }
    printf("\n");

      for (int i = 0; i < 5; i++)
    {
        printf("%d ",*p2+i);
    }
    
}