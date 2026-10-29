// WAP to read n numbers in an array and print them in reverse order.
#include <stdio.h>
void main()
{
    int n, i,a[100];
    printf("Enter the size of an arrey");
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    for ( i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}