#include <stdio.h>

#define SIZE 5

int main() {
    int arr1[SIZE] = {1, 2, 3, 4, 5};
    int arr2[SIZE] = {10, 20, 30, 40, 50};

    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int temp;

    // Swapping elements using pointers
    for (int i = 0; i < SIZE; i++) {
        temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }

    // Displaying Array 1
    printf("Array 1 after swapping: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(arr1 + i));
    }

    // Displaying Array 2
    printf("\nArray 2 after swapping: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(arr2 + i));
    }
    printf("\n");

    return 0;
}