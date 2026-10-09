// Find weather given string is palindrome or not.

#include <stdio.h>
void main()
{
    int len, flag = 0;
    char s1[100];
    gets(s1);

    for (int i = 0; s1[i] != '\0'; i++)
    {
        len++;
    }
    
    for (int i = 0; i < len / 2; i++)
    {
        if (s1[i] == s1[len - 1 - i])
        {
            flag == 1;
        }
    }
    if (flag == 0)
    {
        printf("Given string is a pelendrom");
    }
    else
    {
        printf("Not a string");
    }
}