/*
 * =====================================================================================
 *
 *       Filename:  mmap.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/20 09時48分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/mman.h>

int main(int argc, char* argv[])
{
    int fd;
    char *cp;

    fd = open("/tmp/mmap", O_RDWR);
    cp = mmap(NULL, sizeof(char), PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);

    printf("%c\n", *cp);

    *cp = *cp + 1;
    msync(cp, sizeof(char), 0);

    return 0;
}
