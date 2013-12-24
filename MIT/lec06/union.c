/*
 * =====================================================================================
 *
 *       Filename:  union.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/22 16時18分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

union ipv4 {
    unsigned char  c[4];
    unsigned short s[2];
    unsigned int   i;
};

int main(int argc, char* argv[])
{
    union ipv4 addr;
    int i;

    addr.c[0] = 192;
    addr.c[1] = 168;
    addr.c[2] = 1;
    addr.c[3] = 10;

    for ( i = 0; i < 3; i++ ) {
        printf("%d.", addr.c[i]);
    }
    printf("%d\n", addr.c[3]);

    printf("%04X:%04X\n",addr.s[0],addr.s[1] );
    printf("%04X:%04X\n", htons(addr.s[0]), htons(addr.s[1]));
    printf("%X\n", addr.i );
    printf("%X\n", htonl(addr.i) );

    exit(0);
}
