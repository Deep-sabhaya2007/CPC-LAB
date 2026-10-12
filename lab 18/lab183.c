// Count simple interest using function.

#include <stdio.h>

int si(int p, int t, int r);
void main()
{
    int p, r, t;
    printf("Enter the principal value = ");
    scanf("%d", &p);
    printf("Enter the Rate = ");
    scanf("%d", &r);
    printf("Enter the Time = ");
    scanf("%d", &t);
    int res = si(p, t, r);
    printf("simple intrest = %d", res);
}
int si(int p, int t, int r)
{
    return (p * r * t) / 100;
}