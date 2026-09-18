// conversion of second in min hour
#include <stdio.h>
void main()
{
    int h, s, m;
    printf("Enter secounds : ");
    scanf("%d", &s);

    h = s / 3600;

    m = (s - (3600 * h)) / 60;

    s = (s - (3600 * h + 60 * m));

    printf("%d:%d:%d", h, m, s);
}