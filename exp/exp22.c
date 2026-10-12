#include <stdio.h>
#include "number.h"

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (prime(n))
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is not a Prime number.\n", n);

    if (armstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    if (perfect(n))
        printf("%d is a Perfect number.\n", n);
    else
        printf("%d is not a Perfect number.\n", n);

    return 0;
}