// Add two times hh, mm and ss using structure.
#include <stdio.h>
struct time
{
    int hour, min, sec;
};
int main()
{
    struct time t1, t2, sum;

    printf("Enter the first time : \n\n");
    printf(" Enter the hour : ");
    scanf(" %f", &t1.hour);

    printf(" Enter the minute : ");
    scanf(" %f", &t1.min);

    printf(" Enter the second : ");
    scanf(" %f", &t1.sec);

    printf("Enter the second time : \n\n");
    printf(" Enter the hour : ");
    scanf(" %f", &t2.hour);

    printf(" Enter the minute : ");
    scanf(" %f", &t2.min);

    printf(" Enter the second : ");
    scanf(" %f", &t2.sec);

    sum.hour = t1.hour + t2.hour;
    sum.min = t1.min + t2.min;
    sum.sec = t2.sec + t2.sec;

    if (sum.sec > 60)
    {
        sum.min = sum.min + (sum.sec) / 60;
        sum.sec = sum.sec % 60;
    }

    if (sum.min > 60)
    {
        sum.hour = sum.hour + (sum.min) / 60;
        sum.min = sum.min % 60;
    }

    printf("Time == %02d :  %d :  %d ", sum.hour ,sum.min, sum.sec);
}