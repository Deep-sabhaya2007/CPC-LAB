#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    printf("Enter 1 to Shutdown the Computer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
#ifdef _WIN32
        system("shutdown /s /t 0");     // Windows
#else
        system("shutdown -h now");      // Linux
#endif
    }
    else
    {
        printf("Shutdown cancelled.\n");
    }

    return 0;
}