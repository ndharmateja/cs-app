#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char c;

    // Let us say we entered "Hello\n"
    //
    // Important: Terminal input is line-buffered by default in canonical mode.
    // This means that the operating system won't deliver anything to 'read'
    // until we press Enter. At that point, the entire line "Hello\n" becomes
    // available in the kernel's input buffer.
    //
    // The read call is blocked until we enter a newline, so the whole "Hello\n"
    // is read into the buffer
    // The first read will get 'H' as we are only reading one byte at a time and it
    // would immediately write 'H' to stdout immediately
    // The second read will get 'e' and will write 'e' to stdout
    // The third read will get 'l' and will write 'l' to stdout
    // The fourth read will get 'l' and will write 'l' to stdout
    // The fifth read will get 'o' and will write 'o' to stdout
    // The sixth read will get a newline and will write a newline to stdout
    //
    // The seventh read will block again until we enter a newline and so on
    while (read(STDIN_FILENO, &c, 1) > 0)
        write(STDOUT_FILENO, &c, 1);

    return 0;
}