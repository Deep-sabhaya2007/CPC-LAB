#include <stdio.h>
void main()
{
    int choice;
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("number of days is 31");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("number of days is 30");
        break;

    default:
        printf("month is fabuary and has 20/29 days");
        break;
    }
}