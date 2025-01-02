#include <stdio.h>

enum foo
{
    foo2 = 0,
    foo3,
    foo4,
};

static char case_coverter[] = {
    ['a'] = 'A',
    ['b'] = 'B',
    ['c'] = 'C'};

// Another way to write the squares array list
static int sqaures[] = {
    [foo2] = 4,
    [foo3] = 9,
    [foo4] = 16};
// static int sqaures[] = {
//     4, 9, 16};

int main()
{
    printf("%d \n", sqaures[foo2]);
    printf("%d \n", sqaures[foo3]);
    printf("%d \n", sqaures[foo4]);

    printf("%c \n", case_coverter['a']);
    printf("%c \n", case_coverter['b']);
    printf("%c \n", case_coverter['c']);
}