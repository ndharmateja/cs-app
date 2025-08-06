#include <stdio.h>

void f(int *ptr)
{
    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 3;
    ptr[4] = 4;
}

int main()
{
    int arr[2];
    f(arr);
    printf("arr[0]: %d\n", arr[0]);
    printf("arr[1]: %d\n", arr[1]);
    return 0;
}