#include <stdio.h>

int main()
{
    int n = 10;

    printf("Value of n = %d\n", n);
    printf("Address of n = %p\n", (void *)&n);

    return 0;
}