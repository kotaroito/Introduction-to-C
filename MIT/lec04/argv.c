/*
 * =====================================================================================
 *
 *       Filename:  argv.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/08 16時52分08秒
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

int main (int argc, char* argv[])
{
    int i;
    for ( i = 0; i < argc; i++ ) {
        puts(argv[i]);
    }

    exit(0);
}
