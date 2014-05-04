#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int fds[2];
    int pid;
    char buf[1024];

    if ( pipe(fds) < 0 ) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    pid = fork();
    if ( pid < 0 ) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    // child
    if ( pid == 0 ) {
        close(fds[0]); 
        write(fds[1], "hi", 3);
        exit(0);
    }
    // parent
    else {
        close(fds[1]);
        read(fds[0], buf, 1024);
        wait(NULL);
        printf("the child says '%s'\n", buf); 
    }

    return 0;
}
