#include <stdio.h>

int main()
{
    int a[5], i, count = 0;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] < 0)
        {
            count++;
        }
    }

    printf("Total negative elements = %d", count);

}
