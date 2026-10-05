#include <stdio.h>
void main()
{
     int a = 10;
    float b = 20.5;
    double c = 30.55;
    char d = 'A';

    int *p1 = &a;
    float *p2 = &b;
    double *p3 = &c;
    char *p4 = &d;

    p1 = &a;

    printf(" Value of a = %d \n", p1);
    printf(" Address of a = %d \n", *p1);

     p2 = &b;

    printf(" Value of b = %d \n", p2);
    printf(" Address of b = %d \n", *p2);

    p3 = &c;

    printf(" Value of c = %d \n", p3);
    printf(" Address of c = %d \n", *p3);

    p4 = &d;

    printf(" Value of d = %d \n", p4);
    printf(" Address of d = %d \n", *p4);
}