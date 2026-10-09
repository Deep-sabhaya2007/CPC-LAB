// Manual implementation of strlen(), strcpy() and strcmp() function.

#include <stdio.h>
void main()
{
    int len=0;
    char s[100];
    printf("Enter the string ");
    gets(s);

    for (int i = 0; s[i]!='\0'; i++)
    {
        len++;
    }
    printf("%d",len);
}

