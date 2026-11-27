#include <stdlib.h>
void main()
{
    int n, sum = 0;
    printf("Enter the n :");
    scanf("%d", &n);
    int *ptr = malloc(n * sizeof(int) * 5);
    // int *ptr =(int *) malloc(n*sizeof(int) * 5);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    //     ptr = realloc(ptr,7*sizeof(int));
    ptr = realloc(ptr, (n + 2) * sizeof(int));
    for (int i=n;i<n+2;i++)
    {
        scanf("%d",ptr+i);
    }
    
    for (int i = 0; i < n+2; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("%d", sum);
}