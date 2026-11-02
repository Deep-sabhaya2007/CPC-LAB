// Add two distances in feet and inches using structure.
#include <stdio.h>
struct temp
{
    float feet1, feet2;
    // float inch2;
};
int main()
{
    struct temp s;

    printf("Enter the 1-feet : ");
    scanf("%f",&s.feet1);

    printf("Enter the 2-feet : \n");
    scanf("%f",&s.feet2);

    // float feet3 = s.feet1 + s.feet2;
    printf(" additon in feet = %f\n", s.feet1 + s.feet2);
    printf(" additon in inch = %f", (s.feet1)*12 + (s.feet2)*12);

}
