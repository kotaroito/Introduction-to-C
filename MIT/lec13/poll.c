#include <stdlib.h>
#include <stdio.h>
#include <poll.h>
#include <unistd.h>

#define BUFFSIZE 1024

int main(void)
{
    struct pollfd pfd;
    int retval;
    char readbuf[BUFFSIZE];

    pfd.fd = STDIN_FILENO;
    pfd.events = POLLIN;

    retval = poll(&pfd, 1, 10 * 1000);

    if ( retval == 0 ) {
        printf("timeout\n");
    }
    else if ( retval < 0 ) {
        perror("poll");
    }
    else {
        read(STDIN_FILENO, readbuf, BUFFSIZE); 
        printf("%s\n", readbuf);
    }

    return 0;
}
