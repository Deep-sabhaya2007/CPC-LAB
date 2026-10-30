	

#include <stdio.h>
struct book
{
    char title[100];
    char authorname[100];
    int pubdate;
    float price;
};



void main()

{
    struct book b1, b2, b3;

    printf("enter 1st books  detils \n \n");

    printf("Ente the punlication  date : ");
    scanf("%d", &b1.pubdate);

    printf("Ente the book price : ");
    scanf("%f", &b1.price);

    getchar();
    printf("enter the book title : ");
    gets(b1.title);

    printf("enter the authore name : ");
    gets(b1.authorname);

    // 00000000000

    printf("enter 2nd books  detils : \n");

    printf("Ente the punlication  date : ");
    scanf("%d", &b2.pubdate);

    printf("Ente the book price : ");
    scanf("%f", &b2.price);

    getchar();
    printf("enter the book title : ");
    gets(b2.title);

    printf("enter the authore name : ");
    gets(b2.authorname);

    // 1111111

    printf("enter 3rd books  detils : \n");

    printf("Ente the punlication  date : ");
    scanf("%d", &b3.pubdate);

    printf("Ente the book price : ");
    scanf("%f", &b3.price);

    getchar();
    printf("enter the book title : ");
    gets(b3.title);

    printf("enter the authore name : ");
    gets(b3.authorname);


    printf("book title : %s",b1.title);
    printf("author name : %s",b1.authorname);
    printf("pu date : %d",b1.pubdate);
    printf("%f",b1.price);

    printf("\n");
    printf("book title : %s",b2.title);
    printf("author name : %s",b2.authorname);
    printf("pu date : %d",b2.pubdate);
    printf("%f",b2.price);

    printf("\n");
    printf("book title : %s",b3.title);
    printf("author name : %s",b3.authorname);
    printf("pu date : %d",b3.pubdate);
    printf("%f",b3.price);

}


