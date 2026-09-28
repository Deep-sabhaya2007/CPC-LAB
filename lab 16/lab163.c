// Read and store the roll no and marks of 20 students using 2D array

#include <stdio.h>
void main()
{
    int a[2][2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the roll no and marks");
        scanf("%d %d", &a[i][0], &a[i][1]);
    }

    printf("Roll no. \t Marks");

    for (int i = 0; i < 2; i++)
    {
        printf("\n%d \t | %d\t", a[i][0], a[i][1]);
    }
}