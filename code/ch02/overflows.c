#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d\n", 200 * 300 * 400 * 500);     // -884901888
    printf("%d\n", (200 * 300) * (400 * 500)); // -884901888
    printf("%d\n", ((200 * 300) * 400) * 500); // -884901888

    printf("%f\n", (3.14 + 1e20) - 1e20); // 0.0
    printf("%f\n", 3.14 + (1e20 - 1e20)); // 3.14
    return 0;
}
