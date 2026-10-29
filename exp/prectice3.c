#include <stdio.h>
void main()
{
    int data[3][3] = {
        {1, 2, 3}, // row 0 with 3 elements
        {4, 5, 6}, // row 1 with 3 elements
        {7, 8, 9}  // row 2 with 3 elements
    };
    printf("%d", data[0][0]);   // 1
    printf("%d", data[0][1]);   // 2
    printf("%d\n", data[0][2]); // 3
    printf("%d", data[1][0]);   // 4
    printf("%d", data[1][1]);   // 5
    printf("%d\n", data[1][2]); // 6
    printf("%d", data[2][0]);   // 7
    printf("%d", data[2][1]);   // 8
    printf("%d", data[2][2]);   // 9
}