#include <stdio.h>
void main()
{
    int maths, science, hindi, english, computer;
    float p;
    printf("Enter marks of maths : ");
    scanf("%d", &maths);
    printf("Enter marks of science : ");
    scanf("%d", &science);
    printf("Enter marks of hindi : ");
    scanf("%d", &hindi);
    printf("Enter marks of english : ");
    scanf("%d", &english);
    printf("Enter marks of computer : ");
    scanf("%d", &computer);

    p = (maths + science + english + computer + hindi)/5;
    printf("%f\n",p);

    if (p > 71 && p < 100)
    {
        printf("Grade A");
    }

    else if (p > 60 && p < 70)
    {
        printf("Grade B");
    }

    else if (p > 45 && p < 60)
    {
        printf("Grade C");
    }

    else if (p > 35 && p < 45)
    {
        printf("Grade D");
    }

    else if (p < 35)
    {
        printf("TRY NEXT TIME");
    }
}