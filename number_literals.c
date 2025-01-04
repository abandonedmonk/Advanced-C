#include <stdio.h>

int main(void)
{
    int a = 32;
    // uint64_t a = 32; // Not supported in my system
    int b = 0xffaa33;
    int c = 0722;
    int d = 0b01000111001;

    printf("%ld \n", a);
    printf("%x \n", b); // To print the hexadecimal
    printf("%o \n", c); // To print an Octal Number
    printf("%b \n", d); // To print an Binary Number

    return 0;
}