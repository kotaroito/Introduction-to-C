#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

#define BUF_SIZE 1024

int main(void)
{
    fd_set rfds;
    struct timeval tv;
    int retval;
    char readbuf[BUF_SIZE];

    FD_ZERO(&rfds);
    FD_SET(0, &rfds);

    tv.tv_sec  = 5;
    tv.tv_usec = 0;

    retval = select(1, &rfds, NULL, NULL, &tv);

    if ( retval == -1 ) {
        perror("select");
        exit(EXIT_FAILURE);
    }
    else if ( retval ) {
        if ( FD_ISSET(0, &rfds) ) {
            read(0, readbuf, BUF_SIZE); 
            printf("%s\n", readbuf);
        }
    }
    else {
        puts("timeout");
    }

    return 0;
}
