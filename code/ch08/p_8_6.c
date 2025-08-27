#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int i;

    // Print command line args
    printf("Command-line arguments:\n");
    for (i = 0; argv[i] != NULL; i++)
        printf("    argv[%2d]: %s\n", i, argv[i]);
    printf("\n");

    // Print environment variables
    printf("Environment variables:\n");
    for (i = 0; envp[i] != NULL; i++)
        printf("    envp[%2d]: %s\n", i, envp[i]);
}