// swape the numbers without temp
#include <stdio.h>
void main()
{
 int a,b;
printf("Enter value of a : ");
scanf("%d",&a);

printf("Enter value of b : ");
scanf("%d",&b);
a = a + b;
b = a - b;
a = a - b;
printf(" New value of a :%d\n",a);
printf(" New value of b :%d\n",b);

}