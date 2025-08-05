#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct rec
    {
        int *a;
        float b;
        char c;
        short d;
        long e;
        double f;
        int g;
        char *h;
    };

    printf("Struct rec:\n");
    printf("offsetof(a): %zu\n", offsetof(struct rec, a));
    printf("offsetof(b): %zu\n", offsetof(struct rec, b));
    printf("offsetof(c): %zu\n", offsetof(struct rec, c));
    printf("offsetof(d): %zu\n", offsetof(struct rec, d));
    printf("offsetof(e): %zu\n", offsetof(struct rec, e));
    printf("offsetof(f): %zu\n", offsetof(struct rec, f));
    printf("offsetof(g): %zu\n", offsetof(struct rec, g));
    printf("offsetof(h): %zu\n", offsetof(struct rec, h));
    printf("sizeof(struct rec): %zu bytes\n", sizeof(struct rec));

    exit(EXIT_SUCCESS);
}