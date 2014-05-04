#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <signal.h> 

#define BUF_SIZE 1024
#define LISTEN_PORT 5000


int main(int argc, char* argv[])
{
    struct sockaddr_in sv_addr;
    struct sockaddr_in cl_addr;
    int addr_size = sizeof(struct sockaddr_in);

    int conn_fd;
    int listen_fd;
    char readbuf[BUF_SIZE];
    int readsize;
    int loopcnt;

    if ( (listen_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0 ) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    sv_addr.sin_family      = AF_INET;
    sv_addr.sin_addr.s_addr = INADDR_ANY;
    sv_addr.sin_port        = htons(LISTEN_PORT);
    if ( (bind(listen_fd, (struct sockaddr*)&sv_addr, addr_size)) < 0 ) {
        perror("bind");
        exit(EXIT_FAILURE);
    }

    if ( (listen(listen_fd, SOMAXCONN)) < 0 ) {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    loopcnt = 0;
    while ( conn_fd = accept(listen_fd, (struct sockaddr*)&cl_addr, &addr_size) ) {
        loopcnt++;

        readsize = read(conn_fd, readbuf, BUF_SIZE);
        write(conn_fd, readbuf, readsize);
        printf("echo(%d): %s\n", loopcnt, readbuf);

        if ( close(conn_fd) < 0 ) {
            perror("close");
            exit(EXIT_FAILURE);
        }
    }

    puts("server will close...");
    close(listen_fd);

    return 0;
}
