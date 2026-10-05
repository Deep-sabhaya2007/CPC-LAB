#include<stdio.h>
void main()
{
    int a=1,b=2,temp;
   
    int *p1 = &a,*p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("new a = %d \n",*p1);
    printf("new b = %d",*p2);
    
}