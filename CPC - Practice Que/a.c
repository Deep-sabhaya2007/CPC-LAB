#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, sum = 0;
    printf("Enter the n :");
    scanf("%d", &n);
    int *ptr = calloc(n, sizeof(int) * 5);

    // int *ptr =(int *) malloc(n*sizeof(int) * 5);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("%d", sum);
}

