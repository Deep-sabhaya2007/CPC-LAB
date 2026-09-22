#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    printf("you want to shout down yes/no");
    scanf("%d",choice);

    if (choice == yes)
    {
        system("shoutdown /s /t 0");

    }
    else
    {
        system("shoutdown cncle");
    }
}
