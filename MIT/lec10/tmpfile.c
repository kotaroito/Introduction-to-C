/*
 * =====================================================================================
 *
 *       Filename:  tmpfile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/17 22時49分23秒
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
#include <unistd.h>

int main(int argc, char* argv[])
{
    char buf[10] = "";
    char *filename = tmpnam(buf);

    puts(filename);
    sleep(10);
    return 0;
}
