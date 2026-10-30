// Demonstrate difference between structure and union.
#include <stdio.h>
struct student
{
    float mark;
    char name;
};

union studentdata
{
    float mark;
    char name;
};
// for structure
void main()
{
    struct student s;

    printf("enter the marks ;");
    scanf("%f", s.mark);

    getchar();
    printf("enter the name ;");
    gets(s.name);
}
// for union
void main()
{
    union studentdata a;

    printf("enter the marks ;");
    scanf("%f", &a.mark);

    getchar();
    printf("enter the name ;");
    gets(a.name);
}
