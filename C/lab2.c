#include<stdio.h>
void main()
{
    float price[5];
    printf("Enter the price of 1 items: ");
    scanf("%f",&price[0]);
    printf("Enter the price of 2 items: ");
    scanf("%f",&price[1]);
    printf("Enter the price of 3 items: ");
    scanf("%f",&price[2]);
    printf("Enter the price of 4 items: ");
    scanf("%f",&price[3]);
    
    
    
    printf("Total price of 1= %f \n",price[0]+0.18*price[0]);
    printf("Total price of 2= %f \n",price[1]+0.18*price[1]);
    printf("Total price of 3= %f \n",price[2]+0.18*price[2]);
}