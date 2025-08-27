#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int sig_num)
{
    // So that the ^C and our print statements
    // get printed on different lines
    printf("\n");
    return;
}

unsigned snooze(unsigned seconds)
{
    unsigned seconds_left = sleep(seconds);

    printf("Slept for %d of %d seconds.\n", (seconds - seconds_left), seconds);
    return seconds_left;
}

int main(int argc, char *argv[])
{
    // Check arguments
    if (argc != 2)
    {
        fprintf(stderr, "usage: %s <seconds>\n", argv[0]);
        exit(0);
    }

    // Install the handler
    if (signal(SIGINT, *signal_handler) == SIG_ERR)
    {
        fprintf(stderr, "signal install error\n");
        exit(0);
    }

    // Parse the argument and call snooze
    int seconds = atoi(argv[1]);
    snooze(seconds);

    return 0;
}