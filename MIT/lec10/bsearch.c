/*
 * =====================================================================================
 *
 *       Filename:  bsearch.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/17 23時21分54秒
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
int comparator(const void* ap, const void* bp)
{
    int a = *((int*)ap);
    int b = *((int*)bp);
    if ( a == b )
        return 0;
    else if ( a < b )
        return -1;
    else 
        return 1;
}

int main(int argc, char* argv[]) 
{
    int a[5] = { 1, 2, 3, 4, 5 };
    int i = atoi(argv[1]);
    int *ip;

    ip = (int*)bsearch(&i, a, 5, sizeof(int), comparator);

    if ( ip != NULL ) 
        printf("%d\n", *ip);
}
