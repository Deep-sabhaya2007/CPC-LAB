#include<stdio.h>
void main()
{
    int src[SIZE] = {10, 20, 30, 40, 50};
    int dest[SIZE];
    
    int *ptr_src = src;
    int *ptr_dest = dest;
    int *end_src = src + SIZE;

    // Copying elements using pointers
    while (ptr_src < end_src) {
        *ptr_dest = *ptr_src;
        ptr_src++;
        ptr_dest++;
    }

    // Displaying the destination array
    printf("Copied Array: ");
    ptr_dest = dest; // Reset pointer to start of destination array
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(ptr_dest + i));
    }
    printf("\n");

    return 0;
}