#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

#define FIFO_NAME "fifo"

int main(void)
{
    char s[300];
    int num, fd;

    mknod(FIFO_NAME, S_IFIFO | 0666, 0);
    printf("waiting for reader..\n");

    fd = open(FIFO_NAME, O_WRONLY); 

    while ( gets(s), !feof(stdin) ) {
        num = write(fd, s, strlen(s));
        if ( num == -1 )
            perror("write");
        else
            printf("wrote %d bytes\n", num);
    }

    return 0;
}
