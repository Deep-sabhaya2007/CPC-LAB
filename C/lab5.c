#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    // gets(str);
    scanf("%s",str);

    printf("String = %s\n", str);
    printf("Length = %d", strlen(str));

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100];

//     printf("Enter a string: ");
//     scanf("%[^\n]", str);

//     printf("String = %s\n", str);
//     printf("Length = %d", strlen(str));

//     return 0;
// }