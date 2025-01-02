// Used in IPv4 header formats
// Helpful when trying to parse info from a binary source

#include <stdio.h>

struct foo
{
    int first_4 : 4;
    int next_4 : 4;
    int alone : 1;
    int rest : 7;
};

int main(void)
{
    printf("%zu \n", sizeof(struct foo));

    struct foo f;
    f.first_4 = 3;
    f.next_4 = 1234;
    f.alone = 0;
    f.rest = 3;

    return 0;
}