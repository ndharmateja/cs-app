#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // If we enter "abcdefghij\n"
    // The read will be blocked until "abcdefghij\n" is entered
    // and then all the 11 bytes are available in the buffer
    // The first read will get 'abc' and will write 'abc|' to stdout
    // The second read will get 'def' and will write 'def|' to stdout
    // The third read will get 'ghi' and will write 'ghi|' to stdout
    // At this point the buf array has ghi
    // The fourth read will get a j and a newline and the buf array will now be
    // j\ni as only the j and the newline are read into the buf
    // the i is present from the buf from the previous read
    // and 'j\ni|' is written to stdout
    //
    // The output would be
    // abc|def|ghi|j
    // i|
    // And then the next read would be blocked again until we enter a newline
    char buf[3];
    while (read(STDIN_FILENO, buf, 3) > 0)
    {
        write(STDOUT_FILENO, buf, 3);
        printf("|");
        fflush(stdout);
    }

    return 0;
}