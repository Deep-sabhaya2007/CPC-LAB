#include <stdio.h>
struct Employee
{
    int id;
    float salary;
    char name[30];
};
void main()
{
    struct Employee e;
    printf("Enter your name : ");
    gets(e.name);
    printf("Enter your id : ");
    scanf("%d", &e.id);
    printf("Enter your salary : ");
    scanf("%d", &e.salary);
    printf("\n Name of Employee = \n %s", e.name);
    printf(" Id of Employee = %d \n", e.id);
    printf(" Salary of Employee = %f", e.salary);
}
