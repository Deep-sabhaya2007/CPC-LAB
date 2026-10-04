#include <stdio.h>

int main()
{
    int a = 10;
    float b = 20.5;
    double c = 30.55;
    char d = 'A';

    int *p1 = &a;
    float *p2 = &b;
    double *p3 = &c;
    char *p4 = &d;

    printf("Integer value = %d\n", *p1);
    printf("Float value = %.2f\n", *p2);
    printf("Double value = %.2lf\n", *p3);
    printf("Character value = %c\n", *p4);

    return 0;
}