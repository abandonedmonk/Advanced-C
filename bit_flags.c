#include <stdio.h>
#include <stdbool.h>

// typedef unsigned int t_flag;
// #define FLAG_A (1 << 0)
// #define FLAG_B (1 << 1)
// #define FLAG_C (1 << 2)

typedef enum
{
    FLAG_A = (1 << 0),
    FLAG_B = (1 << 1),
    FLAG_C = (1 << 2)
} t_flag;

// Normal way of passing arguments
// int f(int x, bool is_added, bool is_squared, bool is_not)
// {
//     if (is_added)
//     {
//         x += x;
//     }
//     if (is_squared)
//     {
//         x *= x;
//     }
//     if (is_not)
//     {
//         x = ~x;
//     }
// }
int f(int x, t_flag flags)
{
    printf("%d \n", flags);
    if (flags & FLAG_A)
    {
        x += x;
    }
    if (flags & FLAG_B)
    {
        x *= x;
    }
    if (flags & FLAG_C)
    {
        x = ~x;
    }
    return x;
}

int main(void)
{
    // Calling the normal functions
    // printf("%d \n", f(1234, false, false, false));
    // printf("%d \n", f(1234, true, false, false));
    // printf("%d \n", f(1234, false, true, false));

    // Calling the new functions
    printf("%d \n", f(1234, 0));
    printf("%d \n", f(1234, FLAG_A));
    printf("%d \n", f(1234, FLAG_C | FLAG_B));
    return 0;
}