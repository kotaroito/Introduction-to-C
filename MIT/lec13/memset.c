/*
 * =====================================================================================
 *
 *       Filename:  memset.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/30 23時19分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i;

    memset(&i, 1, 1);

    printf("%d\n", i);
    printf("%ld\n", sizeof(int));
    return 0;
}
