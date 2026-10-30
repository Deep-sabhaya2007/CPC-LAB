#include<stdio.h>

struct Time
{
    int h;
    int m;
};

struct Time addTime(struct Time t1, struct Time t2);

void main()
{
    struct Time t1, t2, t3;

    printf("Time 1 = ");
    scanf("%d %d", &t1.h, &t1.m);

    printf("Time 2 = ");
    scanf("%d %d", &t2.h, &t2.m);

    t3 = addTime(t1, t2);

    printf("Total Time = %d hours %d minutes", t3.h, t3.m);
}

struct Time addTime(struct Time t1, struct Time t2)
{
    struct Time t3;

    t3.m = t1.m + t2.m;
    t3.h = t1.h + t2.h;

    if(t3.m >= 60)
    {
        t3.h++;
        t3.m = t3.m - 60;
    }

    return t3;
}