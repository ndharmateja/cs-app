#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0xfff0cfc7; // -995385
    short sx = x; // 0xcfc7 = -12345
    printf("x: %d, sx: %d\n", x, sx);
    return 0;
}
