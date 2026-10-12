// Find maximum and minimum between two numbers using function.
#include <stdio.h>
int maximum(int c, int d);
int minimum(int c, int d);
int main()
{
    int a, b;

    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);

    printf("Maximum = %d\n", maximum(a, b));
    printf("Minimum = %d", minimum(a, b));
}

int maximum(int c, int d)
{
    if (c > d)
        return c;
    else
        return d;
}

int minimum(int c, int d)
{
    if (c < d)
        return c;
    else
        return d;
}
