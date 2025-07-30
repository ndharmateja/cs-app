#include <stdio.h>

int tmult_ok(int32_t x, int32_t y)
{
    int64_t p64 = ((int64_t)x) * y;
    int32_t p32 = x * y;
    return p64 == p32;
}

int main()
{
    int32_t x = 70000;
    int32_t y = 100000;

    printf("Is mult ok? %s\n", tmult_ok(x, y) ? "yes" : "no");
}