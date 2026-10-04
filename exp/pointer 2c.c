#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int mat1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int mat2[ROWS][COLS] = {
        {7, 8, 9},
        {1, 2, 3}
    };

    int sum[ROWS][COLS];

    // Adding matrices using pointers
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            *(*(sum + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }

    // Displaying the result matrix
    printf("Resultant Matrix (Sum):\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", *(*(sum + i) + j));
        }
        printf("\n");
    }

    return 0;
}