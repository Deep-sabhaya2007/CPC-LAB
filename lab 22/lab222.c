#include <stdio.h>
struct student
{
    char name[50];
    int rollnumber;
    float cpi;
};

void main()
{
    struct student *ptr, student1;
    ptr = &student1;
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    printf("Enter RollNo: ");
    scanf("%d", &ptr->rollnumber);
    printf("Enter CPI: ");
    scanf("%f", &ptr->cpi);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("RollNo: %d", ptr->rollnumber);
    printf("\nCPI: %f", ptr->cpi);
}