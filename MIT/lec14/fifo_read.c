#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>

#define FIFO_NAME "fifo"

int main(void)
{
    char s[300];
    int num, fd;

    mknod(FIFO_NAME, S_IFIFO | 0666, 0);
    printf("waiting for writer..\n");

    fd = open(FIFO_NAME, O_RDONLY);
    do {
        num = read(fd, s, 300);
        if ( num == -1 )
            perror("read");
        else
            printf("read %d bytes:\"%s\" \r\n", num, s);
    } while ( num > 0 );

    return 0;
}
