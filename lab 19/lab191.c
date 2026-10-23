#include <stdio.h>
int exponent(int base, int ghat);
void main()
{
    int base, ghat;
    printf("Enter base :");
    scanf("%d",&base);
    printf("Enter the ghat :");
    scanf("%d",&ghat);
    int ans = exponent(base, ghat);
    printf("Answer =  %d", ans);
}
int exponent(int base, int ghat)
{
    if (ghat == 0)
    {
        return 1;
    }
    return base * exponent(base, ghat - 1);
}
