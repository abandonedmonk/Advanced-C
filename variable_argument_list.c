// The example use case is printf function itself
#include <stdio.h>
#include <stdarg.h>

int sum_of_all(int count, ...)
{
    va_list ap; // ap is argument pointer
    va_start(ap, count);

    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        int x = va_arg(ap, int);
        sum += x;
    }

    va_end(ap);
    return sum;
}

int main(void)
{
    printf("%d, %d\n", 1, 2);
    printf("%d \n", sum_of_all(3, 5, 6, 8));

    return 0;
}