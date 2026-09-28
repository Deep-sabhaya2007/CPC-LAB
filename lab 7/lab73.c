#include <stdio.h>
void main()
{
    int choice, sum, sub, mult, div, x, y;
    printf("enter the value of first number :");
    scanf("%d", &x);
    printf("enter the value of second number :");
    scanf("%d", &y);
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        sum = x+y;
        printf("%d",sum);
    break;
     case 2:
        sub = x-y;
        printf("%d",sub);
    break;
     case 3:
        mult = x*y;
        printf("%d",mult);
    break;
     case 4:
        div = x/y;
        printf("%d",div);
    break;
    
    }
}