#include <stdio.h>
void main()
{
    int odd = 0, even = 0, i = 1, n;

    // printf("Enter the value of n:");
    // scanf("%d",&n);

    while (i <= 10)
    {
        printf("Enter the value of n:");
        scanf("%d", &n);

        if (n% 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        i++;
    }
    printf("Even :%d\n", even);
    printf("Odd :%d", odd);
}