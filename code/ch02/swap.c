#include <stdio.h>

void swap(int *x, int *y)
{
    // Let x -> a, y -> b
    *x = *x ^ *y; // x -> a^b, y -> b
    *y = *x ^ *y; // x -> a^b, y -> a
    *x = *x ^ *y; // x -> b, y -> a
}

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 10;

    printf("x: %d, y: %d\n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);

    return 0;
}
