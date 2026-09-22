//  Check whether given character is vowel or consonant
#include <stdio.h>
void main()
{
    char c;
    printf("Enter any alphabet : ");
    scanf("%c",&c);

    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("c is a vowel");
    }
        else
        {
            printf("c is Consonants");
        }
}