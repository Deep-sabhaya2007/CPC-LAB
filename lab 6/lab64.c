#include<stdio.h>
void  main()
{
    int rem,x;
    printf("Enter any number : ");

    scanf("%d",&x);
    rem = x % 10;
  if (rem % 2==0)
  {
    printf("the last degit of th given number is even");

  }
  else
  {
  printf("the last degit of th given number is odd");
  }

}