#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

// To declare the type
typedef int (*my_funk)(int, int);

// Normal Demo
int foo(int x, int y)
{
    return x + y;
}

// To print the even numbers
bool p(int x)
{
    return x % 2 == 0;
}

// Passing a function as an argument
void print_if(int xs[10], bool (*predicate)(int))
{
    for (int i = 0; i < 10; i++)
    {
        if (predicate(xs[i]))
        {
            printf("%d \n", xs[i]);
        }
    }
}

// Example of using compar function in Qsort
int compar(const void *x1, const void *x2)
{
    return (*(int *)x1) - (*(int *)x2);
}

int main(void)
{
    int xs[] = {3, 2, 1, 5, 4, 6, 9, 8, 10, 7}; // Test array
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", xs[i]);
    // }

    qsort(xs, 10, sizeof(int), compar); // Qsort

    // printf("_______________________\n");

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d \n", xs[i]);
    // }

    // To initialize a function to a variable
    // int (*f)(int, int) = foo;
    my_funk f = foo;
    printf("%d", f(3, 4));

    // To use a function within a function
    // print_if(xs, p);

    return 0;
}