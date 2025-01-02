// Used to emulate dynamic behaviour

#include <stdio.h>
#include <stdbool.h>

enum tag
{
    TAG_BOOL,
    TAG_INT,
    TAG_FLOAT
};

struct dynamic
{
    enum tag tag;

    union
    {
        bool b;
        int i;
        float f;
    };
};

int main(void)
{
    struct dynamic d;
    printf("%zu \n", sizeof d);

    d.tag = TAG_FLOAT;
    d.f = 42.42;

    switch (d.tag)
    {
    case TAG_BOOL:
        printf("Bool: %d \n", d.b);
        break;
    case TAG_FLOAT:
        printf("Float: %f \n", d.f);
        break;
    case TAG_INT:
        printf("Int: %d \n", d.i);
        break;

    default:
        break;
    }
}