/*
 * =====================================================================================
 *
 *       Filename:  alignment.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/31 23時11分02秒
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

int main(int argc, char* argv[])
{
    struct test {
        int  i;
        char c;
    };

    struct test t = { 1, 'A' };

    printf("%ld\n", sizeof(t));
    printf("%ld\n", sizeof(1));

    exit(0);
}

