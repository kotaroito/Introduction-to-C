/*
 * =====================================================================================
 *
 *       Filename:  getchar.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/08 15時53分50秒
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
    char c;
    while ((c = getchar()) != EOF) {
        putchar(c);
        if ( c >= 'A' && c <= 'Z' )
            c = c - 'A' + 'a';
    }
}
