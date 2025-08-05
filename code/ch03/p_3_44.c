#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct P1
    {
        short i;
        int c;
        int *j;
        short *d;
    };

    struct P2
    {
        int i[2];
        char c[8];
        short a[4];
        long *j;
    };

    struct P3
    {
        long w[2];
        int *c[2];
    };

    struct P4
    {
        char w[16];
        char *c[2];
    };

    struct P5
    {
        struct P4 a[2];
        struct P1 t;
    };

    printf("P1 struct:\n");
    printf("offsetof(i): %zu\n", offsetof(struct P1, i));
    printf("offsetof(c): %zu\n", offsetof(struct P1, c));
    printf("offsetof(j): %zu\n", offsetof(struct P1, j));
    printf("offsetof(d): %zu\n", offsetof(struct P1, d));
    printf("sizeof(struct P1): %zu bytes\n", sizeof(struct P1));

    printf("\nP2 struct:\n");
    printf("offsetof(i): %zu\n", offsetof(struct P2, i));
    printf("offsetof(c): %zu\n", offsetof(struct P2, c));
    printf("offsetof(a): %zu\n", offsetof(struct P2, a));
    printf("offsetof(j): %zu\n", offsetof(struct P2, j));
    printf("sizeof(struct P2): %zu bytes\n", sizeof(struct P2));

    printf("\nP3 struct:\n");
    printf("offsetof(w): %zu\n", offsetof(struct P3, w));
    printf("offsetof(c): %zu\n", offsetof(struct P3, c));
    printf("sizeof(struct P3): %zu bytes\n", sizeof(struct P3));

    printf("\nP4 struct:\n");
    printf("offsetof(w): %zu\n", offsetof(struct P4, w));
    printf("offsetof(c): %zu\n", offsetof(struct P4, c));
    printf("sizeof(struct P4): %zu bytes\n", sizeof(struct P4));

    printf("\nP5 struct:\n");
    printf("offsetof(a): %zu\n", offsetof(struct P5, a));
    printf("offsetof(t): %zu\n", offsetof(struct P5, t));
    printf("sizeof(struct P5): %zu bytes\n", sizeof(struct P5));

    exit(EXIT_SUCCESS);
}