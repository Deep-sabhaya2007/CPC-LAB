//  Check whether given character is vowel or consonant
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter any alphabet : ");
    scanf("%c",&ch);

    ((ch >= 'A' && ch <= 'Z'))?(printf("character is an alphabet")):(printf("character is not an alphabet"));
    
}