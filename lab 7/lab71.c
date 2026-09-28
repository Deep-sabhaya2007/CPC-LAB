#include <stdio.h>
void main()
{
    int choice;
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THUSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;

    default:
        printf("invalide choice");
        break;
    }
}