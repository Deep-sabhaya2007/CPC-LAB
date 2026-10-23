// Manual implementation of strlen(), strcpy() and strcmp() function.

#include <stdio.h>
void main()
{
    int len = 0;
    char s1[100], s2[100];
    printf("Enter the string-1 ");
    gets(s1);

   int i;

   
    for ( i = 0; s1[i] !='\0'; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("Coppied string s2 = %s",s2);
}
