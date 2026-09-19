#include <stdio.h>
void main()
{
    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark > 90 && mark <= 100)
    {
        printf("grade A");
    }
    else if (mark > 80 && mark <= 90)
    {
        printf("grade B");
    }
    else if (mark > 70 && mark <= 80)
    {
        printf("gade c");
    }
    else if (mark >60 && mark <=70)
    {
        printf("grade D");
    }
    else if(mark >50 && mark <= 60)
    {
        printf("grade E");
    }
    else if(mark >= 0 && mark <= 50)
    {
        printf("grade F");
    }
    else
    {
        printf("Invalid mark");
    }
}