#include <stdio.h>

#define SIZE 6

void sortArray(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            // Compare adjacent elements using pointer arithmetic
            if (*(arr + j) > *(arr + j + 1))
            {
                // Swap values
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int arr[SIZE] = {64, 34, 25, 12, 22, 11};

    printf("Original array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(arr + i));
    }

    sortArray(arr, SIZE);

    printf("\nSorted array (Ascending): ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}