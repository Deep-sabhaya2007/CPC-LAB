// Demonstrate difference between structure and union.
#include <stdio.h>
// struct student
// {
//     float mark;
//     char name[50];
// };

union studentdata
{
    float mark;
    char name[50];
};
// for structure
// void main()
// {
//     struct student s;

//     printf("enter the marks ;");
//     scanf("%f", s.mark);

//     getchar();
//     printf("enter the name ;");
//     gets(s.name);
//     printf("marks : %f",s.mark);
//     printf("marks : %s",s.name);
// }
// for union
void main()
{
    union studentdata a;

    printf("enter the marks ;");
    scanf("%f", &a.mark);

    getchar();
    printf("enter the name ;");
    gets(a.name);
     printf("marks : %f",a.mark);
    printf("marks : %s",a.name);
}
