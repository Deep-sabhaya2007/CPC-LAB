#include <stdio.h>
void main()
{
    int a = 1, b = 2, sum;
    int  *p1 = &a,*p2 = &b;
  

    sum = *p1 + *p2;

    printf("%d", sum);
}