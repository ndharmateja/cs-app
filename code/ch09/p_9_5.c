#include <unistd.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    // Check the args
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./a.out <filename>\n");
        return 1;
    }

    // Open the file
    int fd = open(argv[1], O_RDONLY);

    // Get the file size
    struct stat sb;
    fstat(fd, &sb);
    off_t size = sb.st_size;

    // Map this file to the virtual memory
    char *ptr = (char *)mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0);

    // Write the memory starting at 'ptr' to stdout
    write(STDOUT_FILENO, ptr, size);

    return 0;
}