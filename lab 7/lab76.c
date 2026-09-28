#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
    printf("enter third number :");
    scanf("%d", &c);
   
    (a > b) ? (printf("%d",a*c)) : (printf("%d",b*c));
}