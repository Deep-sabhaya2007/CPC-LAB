#include <stdio.h>
void main()
{
    char ch;
    ch = 'A';
    printf("Upper case character = ");
    while (ch <= 'Z')
    {
        printf("%c", ch);
        ch++;
    }
    printf("\n");
    printf("Lower case character = ");
    ch = 'a';
    while (ch <= 'z')
    {
        printf("%c", ch);
        ch++;
    }
}