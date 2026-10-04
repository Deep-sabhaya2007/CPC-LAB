#include <stdio.h>

int main()
{
    char str[] = "Hello World";
    char *ptr = str;
    int length = 0;

    // Traverse until the null terminator is encountered
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("String: \"%s\"\n", str);
    printf("Length of string: %d\n", length);

    return 0;
}