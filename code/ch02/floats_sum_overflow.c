#include <stdio.h>
#include "show_bytes.c"

int main()
{
    // Declaring the max normalized 32 bit float
    // 0 1111_1110 1111_1111_1111_1111_1111_111
    // 0x7F7FFFFF
    union
    {
        int u;
        float f;
    } max_float;
    max_float.u = 0x7F7FFFFF;

    // Initializing the max normalized 32 bit float as f1 and f2
    float f1 = max_float.f;
    float f2 = max_float.f;

    // Printing the value of f1 and f2 and the binary representation
    printf("f1: %f\n", f1);
    show_bytes_in_binary((unsigned char *)&f1, sizeof(f1));
    printf("f2: %f\n", f2);
    show_bytes_in_binary((unsigned char *)&f2, sizeof(f2));

    // Computing the sum of f1 and f2
    float f3 = f1 + f2;
    printf("f1 + f2: %f\n", f3);
    show_bytes_in_binary((unsigned char *)&f3, sizeof(f3));

    return 0;
}
