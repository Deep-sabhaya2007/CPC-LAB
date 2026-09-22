#include <stdio.h>
void main()
{
    char ch;

    printf("Enter character :");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Given Character is Upper case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Given character is lower case");
   
       
    }
    else if (ch>='0' && ch<='9')
    {
         printf("The given character is any Numerical value");
    }
    else
    {
        printf("The given character is any special character");
    }
       
}