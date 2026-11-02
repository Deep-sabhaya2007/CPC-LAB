#include <stdio.h>
struct address
{
    char schoolName[50];
    char city[50];
    int pincode;
};
struct student
{
    char name[50];
    char class[50];
    struct address add;
};

void main()
{
    struct student s;
    printf("Enter your name: ");
    gets(s.name);

    printf("Enter your class: ");
    gets(s.class);

    printf("Enter your city name: ");
    gets(s.add.city);

    printf("Enter your pincode: ");
    scanf("%d", &s.add.pincode);

    printf("Enter your school name: ");
    scanf("%s",&s.add.schoolName);
    
    printf("\n");
    // getchar();
    printf("\n");

    printf("your pincofde: %d", s.add.pincode);
    printf("\n");
    printf("your City: %s", s.add.city);
    printf("\n");
    printf("your class: %s", s.class);
    printf("\n");
    printf("your name: %s ", s.name);
    printf("\n");
    printf("your school name: %s", s.add.schoolName);
    printf("\n");
}