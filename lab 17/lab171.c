#include <stdio.h>
void main()
{
    int a, *p;
    printf("Enter the value of a :- ");
    scanf("%d", &a);

    p = &a;

    printf("%d \n", p);
    printf("%d", *p);
}