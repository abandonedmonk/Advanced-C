#include <stdio.h>

/*
    What this does is,
    it literally replaces the text
    that is there in the preprocessor. [ADD1]

    If you want the expression (calculation) seperately,
    then add that expression in the paranthesis. [ADD2]

    Now if you add an expression as an argument,
    then the preprocessor will process it as a string itself. [MUL]

    So if you want to avoid that then you will need to parenthesize
    every variable. [MUL2]
*/
#define ADD1(x, y) x + y
#define ADD2(x, y) (x + y)
#define MUL(x, y) (x * y)
#define MUL2(x, y) ((x) * (y))

/*
    We can also have multiline macros.

    But if you declare a variable in the main function
    that has the same name as the one defined in the Macro,
    then it will cause an error. [sum]

    So to avoid it we declare an extra scope just for the macro.
    To do it we use "do_while" loop or simply writing it in paranthesis
*/

#define ADD_SUM(start, end)                   \
    {                                         \
        int sum = 0;                          \
        for (int x = (start); x < (end); x++) \
            sum += x;                         \
        printf("Sum: %d \n", sum);            \
    }

int main()
{
    int x = 5 * ADD1(2, 3);     // It is actually 5 * 2 + 3, and not 5 * (2 + 3)
    int y = 5 * ADD2(2, 3);     // It is actually 5 * (2 + 3), and not 5 * 2 + 3
    int z = 5 * MUL(2, 3 + 2);  // It is actually 5 * (2 * 3 + 2), and not 5 * (2 * (3 + 2))
    int a = 5 * MUL2(2, 3 + 2); // It is actually 5 * (2 * (3 + 2)), and not 5 * (2 * 3 + 2)
    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d \n", z);
    printf("%d \n", a);
    int sum = 0;
    ADD_SUM(2, 10);

    return 0;
}