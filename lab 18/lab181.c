// Add two numbers using function.
#include <stdio.h>
int add(int c, int d); int main()
{
    int a, b;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    int res = add(a, b);
    printf("%d", res);
}
int add(int c, int d)
{
    return c + d;
}