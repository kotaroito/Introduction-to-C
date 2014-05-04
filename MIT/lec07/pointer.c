/*
 * =====================================================================================
 *
 *       Filename:  pointer.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/02 22時06分20秒
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
#include <signal.h>

void segv_handler()
{
    puts("trap SIGSEGV\n");
    exit(1);
}

int main(int argc, char* argv[])
{
    int *pn;
    printf("%p\n", pn);

//    signal(SIGSEGV, segv_handler);

    *pn = 1;
    exit(0);
}
