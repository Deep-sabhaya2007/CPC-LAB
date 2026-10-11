#include <stdio.h>
void main()
{
    int zero = 0, one = 0, n, digit;
    int two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0;
    printf("Enter n numbr :");
    scanf("%d", &n);

    for (int i = 0; n > 0; i++)
    {
        digit = n % 10;
        switch (digit)
        {
        case 0:
            zero++;

            break;

        case 1:
            one++;

            break;

        case 2:
            two++;

            break;

        case 3:
            three++;

            break;

        case 4:
            four++;

            break;

        case 5:
            five++;

            break;

        case 6:
            six++;

            break;

        case 7:
            seven++;

            break;

        case 8:
            eight++;

            break;

        case 9:
            nine++;

            break;

        
        }
        n=n/10;
    }
    printf("%d  ", zero);
    printf("%d  ", one);
    printf("%d  ", two);
    printf("%d  ", three);
    printf("%d  ", four);
    printf("%d  ", five);
    printf("%d  ", six);
    printf("%d  ", seven);
    printf("%d  ", eight);
    printf("%d  ", nine);
}