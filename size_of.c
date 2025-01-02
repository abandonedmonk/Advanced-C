#include <stdio.h>

#define ARRAY_LEN(a) (sizeof a / sizeof a[0])

int main()
{
    int a = 1;
    int xs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // An array
    int *xs_pointer = xs;                       // Pointer to array

    printf("%zu \n", sizeof(int));       // Size of int
    printf("%d \n", sizeof(int));        // %d can be used instead of zu and it gives no error
    printf("%zu \n", sizeof xs);         // size of array
    printf("%zu \n", sizeof xs_pointer); // Size of Pointer
    printf("%zu \n", ARRAY_LEN(xs));     // Returns the number of elements in an array
    // int *arr = malloc(sizeof(*arr) * arr_size); // No need to change this code if array type is changed

    return 0;
}