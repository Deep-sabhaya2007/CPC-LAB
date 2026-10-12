#include <stdio.h>

void swapValue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside call by value: a = %d, b = %d\n", a, b);
}

void swapReference(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;

    printf("Before call by value: a = %d, b = %d\n", a, b);
    swapValue(a, b);
    printf("After call by value: a = %d, b = %d\n", a, b);

    printf("\nBefore call by reference: a = %d, b = %d\n", a, b);
    swapReference(&a, &b);
    printf("After call by reference: a = %d, b = %d\n", a, b);

    return 0;
}