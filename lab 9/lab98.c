#include <stdio.h>
void main()
{
    int n,rev=0,last;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n!=0)
    {
        rev = (rev*10) + n%10;
        n=n/10;
    }
    last=rev%10;
    switch (last)
 {
case 0:
    printf("zero");
    break;
    
case 1:
    printf("one");
    break;

    
case 2:
    printf("Two");
    break;

    
case 3:
    printf("Three");
    break;

    
case 4:
    printf("Four");
    break;

    
case 5:
    printf("Five");
    break;

    
case 6:
    printf("Six");
    break;

    
case 7:
    printf("Seven");
    break;

    
case 8:
    printf("Eight");
    break;

    
case 9:
    printf("Nine");
    break;
    


default:
    break;
}
}