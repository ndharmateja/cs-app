#include <stdio.h>

void show_bytes(unsigned char *start, size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        printf("%b ", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    printf("(int) x: %d, ", x);
    show_bytes((unsigned char *)&x, sizeof(int));
}
void show_float(float x)
{
    // printf("(float) x: %f, ", x);
    printf("(float) x: %f, 0x%08X, ", x, *(unsigned int *)&x);
    show_bytes((unsigned char *)&x, sizeof(float));
}

void show_pointer(void *x)
{
    printf("(ptr) x: %p, ", x);
    show_bytes((unsigned char *)&x, sizeof(void *));
}

int main(int argc, char const *argv[])
{
    show_int(15);
    float fx = 15.0f;
    show_float(fx);

    int x = 5;
    show_pointer(&x);

    unsigned int hex_val = 0x4A1F23E0;
    float *f_ptr = (float *)&hex_val;

    printf("Manually set float: %f, 0x%08X\n", *f_ptr, *(unsigned int *)f_ptr);
    return 0;
}
