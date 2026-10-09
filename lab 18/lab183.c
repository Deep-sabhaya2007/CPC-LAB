// Copy a one string’s value in another string using a string pointer.

#include <stdio.h>
void main()
{
    char s1[100],*p, s2[100],*q;
    printf("Enter string 1:");
    gets(s1);
    p=s1;
    q=s2;
    while (*p!='\0')
    {
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
printf("Coppied string = %s",s2);    
}