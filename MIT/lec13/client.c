#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>

#define BUFF_SIZE 1024
#define SERVER_PORT 5000

int main(int argc, char* argv[])
{
    int fd;
    struct sockaddr_in addr;
    char readbuff[BUFF_SIZE];
    
    if ( (fd = socket(PF_INET, SOCK_STREAM, 0)) < 0 ) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    addr.sin_family      = PF_INET;
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    addr.sin_port        = htons(SERVER_PORT);
    
    if ( connect(fd, (struct sockaddr*)&addr, sizeof(addr)) < 0 ) {
        perror("connect");
        exit(EXIT_FAILURE);
    }

    write(fd, argv[1], BUFF_SIZE);
    read(fd, readbuff, BUFF_SIZE); 
    printf("%s\n", readbuff);

    close(fd);

    return 0;
}
