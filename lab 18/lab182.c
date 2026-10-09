//Using a String pointer remove a space and special character from string.
 


#include <stdio.h>
void main()
{
    
    char s[100] , *p;
    printf("Enter the string");
    gets(s);

    p=s;
    while (*p != 0 )
    {
        if (*p>='A' && *p<= 'Z'||*p>='a' && *p<= 'z'||*p>='1' && *p<= '9')
        {
            printf("%c",*p);
        }
        p++;
    }
    





}