#include <stdio.h>
int f1(int a[],int size);

void main()

{ 
    int size;
  int a[] ={10,20,30,40,50};
  size = 5;
//  int res = f1(a,size);
int res = f1(a,size);
printf("%d",res);
}
 int f1(int a[],int size)
{
    if (size==0)
    {
        
        return printf("Array is nat shorted");
    }
    if (a[size-1]<a[size-2])
    {
        return printf("Array is shorted");
    }
    
    return f1( a,size-1);

}