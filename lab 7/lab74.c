// L7_A4
//  Find out largest number from given 3 numbers using conditional operator. 

#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter 1st Number : ");
    scanf("%d",&a);

    printf("Enter 2nd Number : ");
    scanf("%d",&b);

    printf("Enter 3rd Number : ");
    scanf("%d",&c);


// wrong method ⬇️
    // (a>b && b>c) ? (printf("a is Largest ")) : (printf("b is Largest "));
    // (b>a && a>c) ? (printf("b is Largest ")) : (printf("a is largest "));
    // (c>a && a>b) ? (printf("c is largest ")) : (printf("a is largest "));


// method - 1 ⬇️
    // (a>b) ? ((a>c)?(printf(" a is largest ")):(printf(" c is largest "))) : ((b>c)?(printf(" b is largest ")):( printf(" c is largest" )));


// method - 2 ⬇️
    (a>b && a>c)  ?  (printf( "a is largest = %d",a ))  :  ((b>a && b>c) ? (printf( "b is largest = %d",b )) : ( printf(" c is largest =  %d",c )));
}