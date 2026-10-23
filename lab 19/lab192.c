// Scan a character string passed as an argument and convert all lowercase string to uppercase string.
#include <stdio.h>

void upper(char str[], int i)
{
    if (str[i] == '\0')
        return;

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;

    upper(str, i + 1);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    upper(str, 0);

    printf("Uppercase string = %s", str);

    return 0;
}