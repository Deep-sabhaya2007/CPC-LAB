#include <stdio.h>
int f1(int a);
int main()
{
    int a;
    printf("Enter  mnumber 1: ");
    scanf("%d",&a);

    int ans = f1(a);
    printf("%d", ans);
}
int f1(int a)
{
    if (a==0)

    {
        return 0;
    }
    
        return a%10 + f1(a/10);

    
}

