/*
 * =====================================================================================
 *
 *       Filename:  malloc.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/22 21時59分02秒
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
    int* ip = (int*) malloc(sizeof(int));
    *ip = 100;
    free(ip);

    printf("%d\n", *ip);
    exit(0);
}
