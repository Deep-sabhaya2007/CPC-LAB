#include<stdio.h>
void main()
{
    int bs,hra,da,gross;
    printf("Enter your basic salary : ");
    scanf("%d",&bs);

    if (bs>=30000)
    {
        hra = bs*0.2;
        da = bs*0.8;
         gross = bs+hra+da;
         printf("%d",gross);
    }
    
     else if (bs>=20000)
    {
        hra = bs*0.25;
        da = bs*0.9;
         gross = bs+hra+da;
         printf("%d",gross);
    }
    //  if (bs>=10000)
    else
    {
        hra = bs*0.3;
        da = bs*0.95;
         gross = bs+hra+da;
         printf("%d",gross);
    }
}