#include <stdio.h>
void main()
{
    extern int count;
    count = 20;
    printf("%d",count);
}