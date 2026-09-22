#include<stdio.h>
void main()
{
float unit;

printf("Enter unit of Electricity :");
scanf("%f",&unit);

if (unit<50)
{
   bill = unit*0.50;
   printf("electricity bill = %f ",bill);
}
else if (unit<150)
{
    bill = (unit-50)*0.75+50*.50
    printf("electricity bill = %f",bill);
}

else if (unit<150)
{
    bill = (unit-50)*0.75+50*.50
    printf("electricity bill = %f",bill);
}

}