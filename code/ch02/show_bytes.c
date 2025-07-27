#include <stdio.h>
#include <stdbool.h>

void show_byte(unsigned char c)
{
    // Store the 8 bits of the char c in reverse order
    // in the bytes array
    // Eg: if 'c' is 10 (00001010)
    // bytes = {0, 1, 0, 1, 0, 0, 0, 0}
    unsigned char bytes[8];
    for (int i = 0; i < 8; i++)
    {
        bytes[i] = c % 2;
        c = c >> 1;
    }

    // Print the contents of the bytes array in reverse order
    // Eg: if bytes = {0, 1, 0, 1, 0, 0, 0, 0}
    // prints 00001010
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", bytes[i]);
    }
}

void show_bytes(unsigned char *ptr, int num_bytes, bool in_hex)
{
    // Go over each byte and print it
    for (int i = 0; i < num_bytes; i++)
    {
        unsigned char c = *(ptr++);
        if (in_hex)
            printf("%.2X", c);
        else
            show_byte(c);

        if (i != num_bytes - 1)
            printf(" ");
    }
    printf("\n");
}

void show_bytes_in_binary(unsigned char *ptr, int num_bytes)
{
    show_bytes(ptr, num_bytes, false);
}

void show_bytes_in_hex(unsigned char *ptr, int num_bytes)
{
    show_bytes(ptr, num_bytes, true);
}

int main()
{
    int x = -1;
    printf("x: %d\n", x);
    show_bytes_in_binary((unsigned char *)&x, sizeof(x));
    show_bytes_in_hex((unsigned char *)&x, sizeof(x));

    x = 19;
    printf("x: %d\n", x);
    show_bytes_in_binary((unsigned char *)&x, sizeof(x));
    show_bytes_in_hex((unsigned char *)&x, sizeof(x));

    return 0;
}