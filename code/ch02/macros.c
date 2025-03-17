#include <stdio.h>
#include <stdlib.h>

#define KSIZE 1024

int main(int argc, char const *argv[])
{
    int maxlen = -10;
    int len = KSIZE < maxlen ? KSIZE : maxlen;

    printf("KSIZE < maxlen?: %s, len: %d\n", KSIZE < maxlen ? "true" : "false", len);
    return 0;
}
