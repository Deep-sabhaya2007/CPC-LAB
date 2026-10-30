#include <stdio.h>
struct car
{
    float price;
    char cName[20];
    char mCompName[20];
};
void printDetail(struct car arr[], int size);

void main()
{
    int a[10];
    struct car c[3];
    int i = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter car name: ");
        gets(c[i].cName);
        printf("Enter manufacturing compny name: ");
        gets(c[i].mCompName);
        printf("Enter price: ");
        scanf("%f", &c[i].price);
        getchar();
    }
}
void printDetail(struct car arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i].price >= 700000)
        {
            printf("%s", arr[i].cName);
            printf("%s", arr[i].mCompName);
            printf("%f", arr[i].price);
        }
    }
}