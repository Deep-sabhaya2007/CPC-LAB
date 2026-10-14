
#include <stdio.h>

void call(int a, int b);
void ref(int *p, int *q);

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    call(a, b);
    ref(&a, &b);

    printf("\nReference value = %d, %d\n", a, b);

    return 0;
}

void call(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Call by value = %d, %d\n", a, b);
}

void ref(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}
