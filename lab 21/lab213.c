#include <stdio.h>
struct Student
{
    char cName[20];
    float percentage;
    int age;
};

void main()
{

    struct Student c[5];
    int i = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d's student details : \n\n",i+1);

        printf("Enter your age: ");
        scanf("%d", &c[i].age);

        printf("Enter your persentage: ");
        scanf("%f", &c[i].percentage);

        getchar();
        printf("Enter Student name: ");
        gets(c[i].cName);
        }

    for (int i = 0; i < 5; i++)
    {
        printf("%d student details : \n",i+1);
        printf("Student Name: %s : \n", c[i].cName);
        printf("Student Age: %d : \n", c[i].age);
        printf("Student Percentage: %f\n", c[i].percentage);

        printf("\n \n");
    }
}