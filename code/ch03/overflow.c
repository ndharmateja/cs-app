#include <stdio.h>

int main()
{
    short a = 0x7fff;
    short b = 0x8000;

    printf("a: %hd, b: %hd\n", a, b);
    printf("a - b: %hd\n", a - b);
    return 0;
}